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
	serverLabel_.setText("Room Key:", dontSendNotification);	
	serverKey_.setText(lastServer_, dontSendNotification);
	serverKey_.addListener(this);

	addAndMakeVisible(serverLabel_);
	addAndMakeVisible(serverKey_);
}

void ServerSelector::resized()
{
	auto area = getLocalBounds();
	serverLabel_.setBounds(area.removeFromLeft(kLabelWidth));
	auto entryArea = area.removeFromLeft(kEntryBoxWidth);
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
	ServerInfo::serverName = connectionServerName;
	ServerInfo::serverPort = creds["port"];
	strcpy(RandomNumbers, creds["secret"].toString().toStdString().c_str());

	notify_();
}

void ServerSelector::textEditorFocusLost(TextEditor&)
{
	serverKey_.setText(lastServer_, dontSendNotification);
}


