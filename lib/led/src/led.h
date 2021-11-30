#ifndef LED_H
#define LED_H

#include <Arduino.h>

class LED
{
  unsigned int ledpin;

public:
  LED(unsigned int ledpin)
  {
    Serial.println("[LED] setup I/O mode.");
    this->ledpin = ledpin;
    pinMode(this->ledpin, OUTPUT);
  };
  void blink(unsigned int delay_ms);
  void on();
  void off();
  unsigned int pin();
};
#endif
