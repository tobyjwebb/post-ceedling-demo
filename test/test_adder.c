#include <unity.h>

#include "adder.h"

void setUp() {}
void tearDown() {}

void test_doAddOnePlusTwo() {
	int result = doAddOnePlusTwo();
	TEST_ASSERT_EQUAL(3, result);
}