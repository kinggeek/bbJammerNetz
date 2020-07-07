/*
   Copyright (c) 2019 Christof Ruch. All rights reserved.

   Dual licensed: Distributed under Affero GPL license by default, an MIT license is available for purchase
*/

#include "ServerSelector.h"
#include "ServerInfo.h"
#include "Data.h"
#include "LayoutConstants.h"
#include "ConnectionManager.h"

ServerSelector::ServerSelector(std::function<void()> notify) : lastServer_(ServerInfo::serverName), notify_(notify)
{
	instructionsLabel_.setText("Type room key and press Enter/Return", dontSendNotification);
	serverLabel_.setText("Room Key", dontSendNotification);	
	serverKey_.setText(lastServer_, dontSendNotification);
	serverKey_.addListener(this);

	addAndMakeVisible(instructionsLabel_);
	addAndMakeVisible(serverLabel_);
	addAndMakeVisible(serverKey_);
}

void ServerSelector::setInstructionsLabel(String label) {
	instructionsLabel_.setText(label, dontSendNotification);

}

void ServerSelector::resized()
{
	auto area = getLocalBounds();
	instructionsLabel_.setBounds(0,0,area.getWidth(),kLineHeight);
	serverLabel_.setBounds(area.removeFromLeft(kLabelWidth));
	auto entryArea = area.removeFromLeft(kEntryBoxWidth);
	entryArea.setY(kLineSpacing);
	entryArea.setHeight(kLineHeight);
	serverKey_.setBounds(entryArea);
}

void ServerSelector::fromData()
{
	ValueTree &data = Data::instance().get();
	if (data.hasProperty("ServerKey")) {

		serverKey_.setText(data.getProperty("ServerKey"), true);
		lastServer_ = serverKey_.getText();
	}
}

void ServerSelector::toData() const
{
	ValueTree &data = Data::instance().get();
	data.setProperty("ServerKey", serverKey_.getText(), nullptr);
}

void ServerSelector::textEditorReturnKeyPressed(TextEditor& editor)
{
	lastServer_ = editor.getText();
	ConnectionManager conmgr;
	var creds=conmgr.getServerProperties(lastServer_);
	ServerInfo::serverPort = creds["port"];
	ServerInfo::serverName = creds["host"].toString().toStdString();
#if JUCE_MSVC
	strcpy_s(RandomNumbers, creds["secret"].toString().toStdString().c_str());
#else 
	strcpy(RandomNumbers, creds["secret"].toString().toStdString().c_str());
#endif
/*~	std::cout << "ServerPort: ";
	std::cout << ServerInfo::serverPort;
	std::cout << "\n ServerName: ";
	std::cout << ServerInfo::serverName;
	std::cout << "\n Key1: ";
	std::cout << RandomNumbers;
	std::cout << "\n";
	*/

	if (creds["secret"] == "FAIL") {
		instructionsLabel_.setText("Incorrect Room Key. Please try again.", dontSendNotification);
	}
	else {
		instructionsLabel_.setText("Type room key and press Enter/Return.", dontSendNotification);
	}

	notify_();
}

void ServerSelector::textEditorFocusLost(TextEditor&)
{
	serverKey_.setText(lastServer_, dontSendNotification);
}


