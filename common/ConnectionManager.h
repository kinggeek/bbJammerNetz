#pragma once

extern char RandomNumbers[72];
extern int serverConnectionPort;
const char RandomNumbers_size = sizeof(RandomNumbers);

const String connectionServerURL_ = "https://liveroom.stupid-cat.co.uk/session";
const String connectionServerName = "liveroom.stupid-cat.co.uk";



class ConnectionManager
{
public:

	var ConnectionManager::getServerProperties(String Key) {
		URL connectionServerURL(connectionServerURL_ + "?key=" + Key);
		var(jsonRaw) = JSON::parse(connectionServerURL.readEntireTextStream(false));
		return(jsonRaw);
	}


};

