#include <Arduino.h>
#include <unity.h>
#include "calculator.h"
#include "test_calculator.h"

#ifdef UNIT_TEST

Calculator calc;

void test_function_calculator_addition(void)
{
    TEST_ASSERT_EQUAL(32, calc.add(25, 7));
}

void test_function_calculator_subtraction(void)
{
    TEST_ASSERT_EQUAL(20, calc.sub(23, 3));
}

void test_function_calculator_multiplication(void)
{
    TEST_ASSERT_EQUAL(50, calc.mul(25, 2));
}

void test_function_calculator_division(void)
{
    TEST_ASSERT_EQUAL(33, calc.div(100, 3));
}

#endif
