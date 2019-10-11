#include <stdlib.h>
#include <string.h>

#include "vector_helper.h"

vectorPtr strToVector(const char *str) {
	if (!str) {
		return NULL;
	}
	const char *separator = strchr(str, ';');
	if (!separator) {
		return NULL;
	}
	int x, y;
	x = atoi(str);
	y = atoi(separator+1);
	return initVector(x, y);
}
