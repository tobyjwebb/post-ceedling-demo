#include <stdlib.h>

#include "unity.h"

#include "urltest.h"

void setUp() {}
void tearDown() {}

void test_convertToHTTPS() {
	char *url = "http://some.domain.com/";

	bool err = convertToHTTPS(&url);
	TEST_ASSERT_FALSE(err);
	TEST_ASSERT_EQUAL_STRING("https://some.domain.com/", url);
	free(url);
}
