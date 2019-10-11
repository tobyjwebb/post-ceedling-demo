#include "unity.h"

#include "mock_my_math.h" // Mock the "my_math.h"
#include "adder.h"

void setUp() {}
void tearDown() {}

void test_doAddOnePlusTwo() {
	add_ExpectAndReturn(1, 2, 9); // Expect add() to be called with add(1, 2), and return 9.

	int result = doAddOnePlusTwo(); // This calls add(1, 2), it will receive the value specified in the mock above
	TEST_ASSERT_EQUAL_INT(9, result); // Make sure the function returned what it was supposed to
}
