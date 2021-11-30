#include "led.h"

void LED::blink(unsigned int delay_ms)
{
  this->on();

  delay(delay_ms);

  this->off();

  delay(delay_ms);
}

void LED::on()
{
  Serial.println("[LED] power on.");
  digitalWrite(this->ledpin, HIGH);
}

void LED::off()
{
  Serial.println("[LED] power off.");
  digitalWrite(this->ledpin, LOW);
}

unsigned int LED::pin()
{
  return this->ledpin;
}