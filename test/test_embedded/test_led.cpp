#include <Arduino.h>
#include <unity.h>
#include "test_led.h"
#include "led.h"

#ifdef UNIT_TEST

#define LED_PIN 32

LED led(LED_PIN);

void test_led_builtin_pin_number(void)
{
  TEST_ASSERT_EQUAL(led.pin(), LED_PIN);
}

void test_led_state_high(void)
{
  led.on();
  TEST_ASSERT_EQUAL(HIGH, digitalRead(LED_PIN));
  delay(1000);
}

void test_led_state_low(void)
{
  led.off();
  TEST_ASSERT_EQUAL(LOW, digitalRead(LED_PIN));
  delay(1000);
}

#endif
