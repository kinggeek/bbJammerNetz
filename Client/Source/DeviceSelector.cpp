/*
   Copyright (c) 2019 Christof Ruch. All rights reserved.

   Dual licensed: Distributed under Affero GPL license by default, an MIT license is available for purchase
*/

#include "DeviceSelector.h"

#include "StreamLogger.h"
#include "Settings.h"
#include "AudioDeviceDiscovery.h"
#include "ServerInfo.h"
#include "Data.h"

#include "LayoutConstants.h"

DeviceSelector::DeviceSelector(String const &title, bool showTitle, String const &settingsKey, AudioDeviceManager &manager, bool inputInsteadOfOutputDevices, std::function<void(std::shared_ptr<ChannelSetup>)> updateHandler)
	: title_(title), showTitle_(showTitle), settingsKey_(settingsKey), manager_(manager), updateHandler_(updateHandler), inputDevices_(inputInsteadOfOutputDevices)
{
	titleLabel_.setText(title, dontSendNotification);
	manager_.createAudioDeviceTypes(deviceTypes_);
	int index = 1;
	for (auto deviceType : deviceTypes_) {
		typeDropdown_.addItem(deviceType->getTypeName(), index++);
	}
	typeDropdown_.addListener(this);
	deviceDropdown_.addListener(this);
	if (showTitle_) {
		addAndMakeVisible(titleLabel_);
	}
	addAndMakeVisible(typeDropdown_);
	addAndMakeVisible(deviceDropdown_);
	scrollList_.setViewedComponent(&scrollArea_);
	scrollList_.setScrollBarsShown(true, false);
	addAndMakeVisible(scrollList_);
}

DeviceSelector::~DeviceSelector()
{
	typeDropdown_.removeListener(this);
	deviceDropdown_.removeListener(this);
}

void DeviceSelector::resized()
{
	auto area = getLocalBounds().reduced(kNormalInset);
	if (showTitle_) {
		titleLabel_.setBounds(area.removeFromTop(30).withSizeKeepingCentre(80, 30));
	}
	typeDropdown_.setBounds(area.removeFromTop(kLineHeight)); 
	deviceDropdown_.setBounds(area.removeFromTop(kLineHeight));
	scrollList_.setBounds(area.withTrimmedTop(kNormalInset));
	
	scrollArea_.setSize(area.getWidth(), channelSelectors_.size() * kLineHeight);
	auto listArea = scrollArea_.getLocalBounds();
	for (int i = 0; i < channelSelectors_.size(); i++) {
		auto row = listArea.removeFromTop(kLineHeight);
		channelSelectors_[i]->setBounds(row.removeFromLeft(row.getWidth() / 2));
		if (channelNames_[i]) channelNames_[i]->setBounds(row);
	}
}

juce::AudioIODeviceType * DeviceSelector::deviceType() const
{
	return deviceTypes_[typeDropdown_.getSelectedItemIndex()];
}

void DeviceSelector::fromData()
{
	ValueTree &data = Data::instance().get();
	ValueTree deviceSelector = data.getOrCreateChildWithName(Identifier(titleLabel_.getText(false)), nullptr);
	auto typeName = deviceSelector.getProperty("Type", "");
	typeDropdown_.setText(typeName, sendNotificationSync);
	auto deviceName = deviceSelector.getProperty("Device", "");
	deviceDropdown_.setText(deviceName, sendNotificationSync);
	ValueTree channels = deviceSelector.getChildWithName("Channels");
	if (channels.isValid()) {
		for (int c = 0; c < channels.getNumChildren(); c++) {
			auto child = channels.getChild(c);
			if (child.isValid()) {
				int index = child.getProperty("Index", var(0));
				bool active = child.getProperty("Active");
				if (index >= 0 && index < channelSelectors_.size()) {
					// No notification, but we call the setup once we're done with all channels
					channelSelectors_[index]->setToggleState(active, dontSendNotification);
				}
			}
		}
	}
	buttonClicked(nullptr); //TODO That needs a cleaner method
}

void DeviceSelector::toData() const
{
	var setupObject(new DynamicObject());
	ValueTree &data = Data::instance().get();
	ValueTree deviceSelector = data.getOrCreateChildWithName(Identifier(titleLabel_.getText(false)), nullptr);
	deviceSelector.setProperty("Type", typeDropdown_.getText(), nullptr);
	deviceSelector.setProperty("Device", deviceDropdown_.getItemText(deviceDropdown_.getSelectedItemIndex()), nullptr);
	ValueTree channels = deviceSelector.getOrCreateChildWithName("Channels", nullptr);
	channels.removeAllChildren(nullptr);
	for (int i = 0; i < channelSelectors_.size(); i++) {
		ValueTree obj("Channel");
		obj.setProperty("Name", channelSelectors_[i]->getButtonText(), nullptr);
		obj.setProperty("Active", channelSelectors_[i]->getToggleState(), nullptr);
		obj.setProperty("Index", String(i), nullptr);
		channels.appendChild(obj, nullptr);
	}
}

void DeviceSelector::comboBoxChanged(ComboBox* comboBoxThatHasChanged)
{
	auto selectedType = deviceType();
	if (comboBoxThatHasChanged == &typeDropdown_) {
		deviceDropdown_.clear();
		if (selectedType) {
			// Refill the device dropdown
			selectedType->scanForDevices();
			//TODO When we allow other sample rates or buffer sizes, enable more devices
			StringArray items;
			for (auto device : selectedType->getDeviceNames(inputDevices_)) {
				if (AudioDeviceDiscovery::canDeviceDoBufferSize(selectedType, device, inputDevices_, ServerInfo::bufferSize)
					&& AudioDeviceDiscovery::canDeviceDoSampleRate(selectedType, device, inputDevices_, ServerInfo::sampleRate)) {
					items.add(device);
				}
				else {
					items.add(device + " (unsupported)");
				}
			}
			deviceDropdown_.addItemList(items, 1);
		}
	}
	else if (comboBoxThatHasChanged == &deviceDropdown_) {
		channelSelectors_.clear(true);
		channelNames_.clear(true);
		if (selectedType) {
			String name = deviceDropdown_.getItemText(deviceDropdown_.getSelectedItemIndex());
			std::shared_ptr<AudioIODevice> selectedDevice;
			if (inputDevices_) {
				selectedDevice.reset(selectedType->createDevice("", name));
			}
			else {
				selectedDevice.reset(selectedType->createDevice(name, ""));
			}
			if (selectedDevice) {
				auto channels = inputDevices_ ? selectedDevice->getInputChannelNames() : selectedDevice->getOutputChannelNames();
				for (auto channel : channels) {
					ToggleButton *channelButton = new ToggleButton();
					channelButton->setButtonText(channel);
					channelButton->addListener(this);
					scrollArea_.addAndMakeVisible(channelButton);
					channelSelectors_.add(channelButton);
					/*Label *channelName = new Label("", "unnamed");
					channelName->setEditable(true);
					addAndMakeVisible(channelName);
					channelNames_.add(channelName);*/
					//channelName->addListener(this);
				}
				resized();
			}
		}
	}
}

void DeviceSelector::buttonClicked(Button *)
{
	// Build the current setup as data record and notify whoever is interested
	std::shared_ptr<ChannelSetup> channelSetup = std::make_shared<ChannelSetup>();
	channelSetup->device = deviceDropdown_.getItemText(deviceDropdown_.getSelectedItemIndex()).toStdString();
	auto selectedType = deviceTypes_[typeDropdown_.getSelectedItemIndex()];
	if (selectedType && selectedType->getTypeName().isNotEmpty()) {
		channelSetup->typeName = selectedType->getTypeName().toStdString();
		channelSetup->isInputAndOutput = !selectedType->hasSeparateInputsAndOutputs();
		for (int i = 0; i < channelSelectors_.size(); i++) {
			if (channelSelectors_[i]->getToggleState()) {
				channelSetup->activeChannelNames.push_back(channelSelectors_[i]->getButtonText().toStdString());
				channelSetup->activeChannelIndices.push_back(i);
			}
		}
	}
	updateHandler_(channelSetup);
}
