#include "unity.h"

#include "vectors.h"
#include "vector_helper.h"

void setUp() {}
void tearDown() {}

void test_initVector() {
	vectorPtr vec = initVector(1, 2);
	TEST_ASSERT_NOT_NULL(vec);
	TEST_ASSERT_EQUAL(1, vec->x);
	TEST_ASSERT_EQUAL(2, vec->y);
	destroyVector(&vec);
	TEST_ASSERT_NULL(vec);
}

void test_sumVectors() {
	vectorPtr vec1 = initVector(1, 2);
	vectorPtr vec2 = strToVector("3;4");
	TEST_ASSERT_NOT_NULL(vec1);
	TEST_ASSERT_NOT_NULL(vec2);
	vectorPtr sumVec = sumVectors(vec1, vec2);
	TEST_ASSERT_NOT_NULL(sumVec);
	TEST_ASSERT_EQUAL(4, sumVec->x);
	TEST_ASSERT_EQUAL(6, sumVec->y);
	destroyVector(&vec1);
	destroyVector(&vec2);
	destroyVector(&sumVec); // NOTE: Comment this line to check that Valgrind captures memory errors
}

void test_cmp_vectors_equal() {
	vectorPtr vec1 = initVector(1, 2);
	vectorPtr vec2 = strToVector("1;2");
	TEST_ASSERT_NOT_NULL(vec1);
	TEST_ASSERT_NOT_NULL(vec2);
	int result = cmpVectors(vec1, vec2);
	TEST_ASSERT_EQUAL(0, result);
	destroyVector(&vec1);
	destroyVector(&vec2);
}

void test_cmp_vectors_different_y() {
	vectorPtr vec1 = initVector(1, 2);
	vectorPtr vec2 = strToVector("1;4");
	TEST_ASSERT_NOT_NULL(vec1);
	TEST_ASSERT_NOT_NULL(vec2);
	int result = cmpVectors(vec1, vec2);
	TEST_ASSERT_EQUAL(-2, result);
	destroyVector(&vec1);
	destroyVector(&vec2);
}

void test_cmp_vectors_different_x() {
	vectorPtr vec1 = initVector(4, 2);
	vectorPtr vec2 = strToVector("1;2");
	TEST_ASSERT_NOT_NULL(vec1);
	TEST_ASSERT_NOT_NULL(vec2);
	int result = cmpVectors(vec1, vec2);
	TEST_ASSERT_EQUAL(3, result);
	destroyVector(&vec1);
	destroyVector(&vec2);
}
