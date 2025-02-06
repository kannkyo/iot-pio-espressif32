#ifndef WIFI_H
#define WIFI_H

#include <Arduino.h>

#ifndef NATIVE
#include <WiFi.h>
#include <ESP32Ping.h>
#endif

class Wifi
{

public:
  Wifi() {};
  void connect(const char *ssid, const char *passfrase);
  void ping(const char *hostname);
};

#endif
