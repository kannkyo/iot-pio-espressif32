#ifndef UNIT_TEST // disable program main loop while unit testing in progress

#include <Arduino.h>
#include "calculator.h"
#include "secrets.h"
#include "led.h"
#include "wifi.h"

#define LED_BUILTIN 32

Calculator calc;
LED led(LED_BUILTIN);
Wifi wifi;

void setup()
{
  delay(1000);

  Serial.begin(9600);
  Serial.println("Program started!");

  // wifi.connect(WIFI_SSID, WIFI_PASS);
}

void loop()
{
  Serial.println("Hello world!");

  delay(1000);

  Serial.print("Addition: ");
  Serial.println(calc.add(25, 17));

  led.blink(1000);

  Serial.print("Subtraction: ");
  Serial.println(calc.sub(10, 3));

  led.blink(1000);

  Serial.print("Multiplication: ");
  Serial.println(calc.mul(3, 3));

  led.blink(1000);

  Serial.print("Division: ");
  Serial.println(calc.div(100, 3));

  led.blink(1000);
}

#endif
