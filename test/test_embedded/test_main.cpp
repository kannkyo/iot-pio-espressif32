#include <Arduino.h>
#include <unity.h>
#include "test_calculator.h"
#include "test_led.h"
#include "test_hello.h"

#ifdef UNIT_TEST

void setUp(void)
{
  // set stuff up here
  STR_TO_TEST = "Hello, world!";
}

void tearDown(void)
{
  // clean stuff up here
  STR_TO_TEST = "";
}

void setup()
{
  // set stuff up here
  STR_TO_TEST = "Hello, world!";

  delay(2000); // service delay
  UNITY_BEGIN();

  // test string
  RUN_TEST(test_string_concat);
  RUN_TEST(test_string_substring);
  RUN_TEST(test_string_index_of);
  RUN_TEST(test_string_equal_ignore_case);
  RUN_TEST(test_string_to_upper_case);
  RUN_TEST(test_string_replace);

  // test calculator
  RUN_TEST(test_function_calculator_addition);
  RUN_TEST(test_function_calculator_subtraction);
  RUN_TEST(test_function_calculator_multiplication);
  RUN_TEST(test_function_calculator_division);

  // test LED
  RUN_TEST(test_led_builtin_pin_number);
  RUN_TEST(test_led_state_high);
  RUN_TEST(test_led_state_low);

  UNITY_END(); // stop unit testing
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(500);
}

#endif