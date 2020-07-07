/*
   Copyright (c) 2019 Christof Ruch. All rights reserved.

   Dual licensed: Distributed under Affero GPL license by default, an MIT license is available for purchase
*/

#include "ServerStatus.h"
#include "LayoutConstants.h"
#include "Resources.h"

ServerStatus::ServerStatus(std::function<void()> notify) : serverSelector_(notify)
{
	addAndMakeVisible(serverSelector_);
	PNGImageFormat reader;
	MemoryInputStream image(cloud_png, cloud_png_size, false);
	auto im = reader.decodeImage(image);
	cloudImage_.setClickingTogglesState(false);
	cloudImage_.setEnabled(false);
	cloudImage_.setImages(false, true, true, im, 1.0f, Colours::green, im, 1.0f, Colours::white, im, 0.8f, Colours::grey);
	addAndMakeVisible(cloudImage_);
}

void ServerStatus::resized()
{
	auto area = getLocalBounds();
	serverSelector_.setBounds(area.removeFromTop(80));
	cloudImage_.setBounds(area.withSizeKeepingCentre(116, 116));
}

void ServerStatus::fromData()
{
	serverSelector_.fromData();
}

void ServerStatus::toData() const
{
	serverSelector_.toData();
}

void ServerStatus::setConnected(bool isReceiving)
{
	cloudImage_.setToggleState(!isReceiving, dontSendNotification);
	if (isReceiving) serverSelector_.setInstructionsLabel("Connected.");
}
