/*
   Copyright (c) 2019 Christof Ruch. All rights reserved.

   Dual licensed: Distributed under Affero GPL license by default, an MIT license is available for purchase
*/

#pragma once

#include "JuceHeader.h"

class ServerSelector : public Component,
	  private TextEditor::Listener

{
public:
	ServerSelector(std::function<void()> notify);

	virtual void resized() override;

	// Store to and load from settings
	void fromData();
	void toData() const;

private:
	virtual void textEditorReturnKeyPressed(TextEditor&) override;
	virtual void textEditorFocusLost(TextEditor&) override;

	Label serverLabel_;
	TextEditor serverKey_;

	String lastServer_;

	std::function<void()> notify_;
};
