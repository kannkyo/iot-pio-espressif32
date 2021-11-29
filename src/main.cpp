#ifndef UNIT_TEST // disable program main loop while unit testing in progress

#include <Arduino.h>
#include <WiFi.h>
#include "calculator.h"
#include "secrets.h"

Calculator calc;

void blink_once(unsigned int delay_ms)
{
  // digitalWrite(LED_BUILTIN, HIGH);
  delay(delay_ms);
  // digitalWrite(LED_BUILTIN, LOW);
  delay(delay_ms);
}

void setupWifi()
{
  // Connect to Wifi.
  Serial.print("Connecting to ");
  Serial.println(WIFI_SSID);

  // Set WiFi to station mode and disconnect from an AP if it was previously connected
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();

  delay(100);

  WiFi.begin(WIFI_SSID, WIFI_PASS);
  Serial.println("Connecting...");

  while (WiFi.status() != WL_CONNECTED)
  {
    // Check to see if connecting failed.
    // This is due to incorrect credentials
    if (WiFi.status() == WL_CONNECT_FAILED)
    {
      Serial.println("Failed to connect to WIFI. Please verify credentials: ");
      Serial.println();
      Serial.print("SSID: ");
      Serial.println(WIFI_SSID);
      Serial.print("Password: ");
      Serial.println(WIFI_PASS);
      Serial.println();
    }
    delay(5000);
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  Serial.println("Hello World, I'm connected to the internets!!");
}

void setup()
{
  Serial.begin(9600);
  Serial.println("Program started!");
  // setupWifi();
}

void loop()
{
  Serial.println("Hello world!");

  delay(1000);

  Serial.print("Addition: ");
  Serial.println(calc.add(25, 17));

  blink_once(200);

  Serial.print("Subtraction: ");
  Serial.println(calc.sub(10, 3));

  blink_once(200);

  Serial.print("Multiplication: ");
  Serial.println(calc.mul(3, 3));

  blink_once(200);

  Serial.print("Division: ");
  Serial.println(calc.div(100, 3));

  blink_once(200);
}

#endif
