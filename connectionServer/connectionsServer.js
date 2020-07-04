/*
Sample connection server for BBJammerNetz

Install the following node modules in this folder:-

npm install express

*/



const KEYLEN = 72;


const https = require("https"),
fs = require("fs");
var express = require('express')

const options = {
key: fs.readFileSync("keys/key"),
cert: fs.readFileSync("keys/cer")
};

const app = express();
app.get('/session', function(req, res) {
console.log('Session Request');

creds = {
	secret : generateBlowfishSecret(),
	port : 7777,
	name : "Maid-of-Ale Studio 1",
	description : "Booked until 18:00"
}



res.write(JSON.stringify(creds));
res.end();
});


https.createServer(options, app).listen(443);



function generateBlowfishSecret() {
	 var possible = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	
	var key="";
	for (var n=0;n<71;n++) {
		var c=Math.floor(Math.random() * Math.floor(65535-50)+50);
		key+=possible.charAt(Math.floor(Math.random() * possible.length));
	}
	return(key);
}

