#pragma once

extern char RandomNumbers[72];
extern int serverConnectionPort;
const char RandomNumbers_size = sizeof(RandomNumbers);

const String connectionServerURL_ = "https://YOURSERVER.HERE";



class ConnectionManager
{
public:

	var getServerProperties(String Key) {
		URL connectionServerURL(connectionServerURL_ + "?key=" + Key);
		var(jsonRaw) = JSON::parse(connectionServerURL.readEntireTextStream(false));
		return(jsonRaw);
	}


};

