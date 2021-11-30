#include "wifi.h"

void Wifi::connect(const char *ssid, const char *passfrase)
{
#ifndef NATIVE

  // Connect to Wifi.
  Serial.print("[WIFI] Connecting to ");
  Serial.println(ssid);

  // Set WiFi to station mode and disconnect from an AP if it was previously connected
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();

  delay(100);

  WiFi.begin(ssid, passfrase);
  Serial.println("Connecting...");

  while (WiFi.status() != WL_CONNECTED)
  {
    // Check to see if connecting failed.
    // This is due to incorrect credentials
    if (WiFi.status() == WL_CONNECT_FAILED)
    {
      Serial.println("[WIFI] Failed to connect to WIFI. Please verify credentials: ");
      Serial.print("[WIFI] SSID: ");
      Serial.println(ssid);
      Serial.print("[WIFI] Password: ");
      Serial.println(passfrase);
    }
    delay(5000);
  }

  Serial.println("[WIFI] WiFi connected");
  Serial.print("[WIFI] IP address: ");
  Serial.println(WiFi.localIP());

  Serial.println("[WIFI] Hello World, I'm connected to the internets!!");

#endif
};