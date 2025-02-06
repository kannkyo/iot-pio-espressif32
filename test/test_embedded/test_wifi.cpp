#include <Arduino.h>
#include <unity.h>
#include "test_wifi.h"
#include "wifi.h"
#include "secrets.h"

#ifdef UNIT_TEST

Wifi wifi;

void test_wifi_connect(void)
{
  wifi.connect(WIFI_SSID, WIFI_PASS);
}

#endif
