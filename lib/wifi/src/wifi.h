#ifndef WIFI_H
#define WIFI_H

#include <Arduino.h>
#include <WiFi.h>

class Wifi
{

public:
  Wifi(){};
  void connect(const char *ssid, const char *passfrase);
};

#endif
