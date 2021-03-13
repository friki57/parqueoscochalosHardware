
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

const char* ssid     = "COMTECO-95265803";
const char* password = "JBEMZ70607";
//const char* ssid     = "erick";
//const char* password = "palomasturbas";
String pubString;
const char* host     = "104.129.131.142";
float sensor1Value   = 0;
float sensor2Value   = 0 ;
float sensor3Value   = 0 ;
float sensor4Value   = 0 ;
const int httpPort   = 4000;

void conectarWiFi()
{
   WiFi.begin(ssid, password);
    while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.print(".");
    }
    Serial.println("WiFi connected");
    Serial.println("IP address: ");
    Serial.println(WiFi.localIP());
}
