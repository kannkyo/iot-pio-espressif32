#include <Arduino.h>
#include <unity.h>
#include "test_led.h"
#include "led.h"

#ifdef UNIT_TEST

#define LED_BUILTIN 32

LED led(LED_BUILTIN);

void test_led_builtin_pin_number(void)
{
  TEST_ASSERT_EQUAL(led.pin(), LED_BUILTIN);
}

void test_led_state_high(void)
{
  led.on();
  TEST_ASSERT_EQUAL(HIGH, digitalRead(LED_BUILTIN));
  delay(1000);
}

void test_led_state_low(void)
{
  led.off();
  TEST_ASSERT_EQUAL(LOW, digitalRead(LED_BUILTIN));
  delay(1000);
}

#endif
