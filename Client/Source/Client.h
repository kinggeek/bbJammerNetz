/*
   Copyright (c) 2019 Christof Ruch. All rights reserved.

   Dual licensed: Distributed under Affero GPL license by default, an MIT license is available for purchase
*/

#pragma once

#include "JuceHeader.h"

#include "DataReceiveThread.h"

#include "RingOfAudioBuffers.h"

class Client {
public:
	Client(std::function<void(std::shared_ptr<JammerNetzAudioData>)> newDataHandler);
	~Client();

	bool isReceivingData() const;
	bool sendData(JammerNetzChannelSetup const &channelSetup, std::shared_ptr<AudioBuffer<float>> audioBuffer);
	int getCurrentBlockSize() const;
	double currentRTT() const;
	std::shared_ptr<JammerNetzClientInfoMessage> getClientInfo() const;

	void setFlareNumber(int numberOfFlares);

private:
	bool sendData(String const &remoteHostname, int remotePort, void *data, int numbytes);

	DatagramSocket socket_;
	uint64 messageCounter_;
	uint8 sendBuffer_[65536];
	std::atomic_int currentBlockSize_;
	std::atomic_int numberOfFlares_;

	std::unique_ptr<DataReceiveThread> receiver_;
	RingOfAudioBuffers<AudioBlock> fecBuffer_; // Forward error correction buffer, keep the last n sent packages
	BlowFish blowFish_;
};
