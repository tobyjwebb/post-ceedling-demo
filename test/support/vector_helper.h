#ifndef VECTOR_HELPER
#define VECTOR_HELPER

#include "vectors.h"

// strToVector parses a string separated by ; to a vectorPtr
// Example: vectorPtr vec = strToVector("123;456"); // x=123 y=456
vectorPtr strToVector(const char *str);

#endif // VECTOR_HELPER
