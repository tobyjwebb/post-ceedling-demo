#include <stdlib.h>

#include "vectors.h"

#include "vector_helper.h"

vectorPtr initVector(int x, int y) {
	vectorPtr ptr = (vectorPtr)malloc(sizeof(struct Vector));
	if (ptr) {
		ptr->x = x;
		ptr->y = y;
	}
	return ptr;
}

void destroyVector(vectorPtr *ptr) {
	if (!*ptr) {
		return;
	}
	free((void*)*ptr);
	*ptr = NULL;
}

vectorPtr sumVectors(const vectorPtr a, const vectorPtr b) {
	if (!a || !b) {
		return NULL;
	}

	vectorPtr new2DVec = initVector(0, 0);
	if (!new2DVec) {
		return NULL;
	}
	new2DVec->x = a->x + b->x;
	new2DVec->y = a->y + b->y;
	return new2DVec;
}

int cmpVectors(const vectorPtr a, const vectorPtr b) {
	if (!a && !b) {
		return 0;
	}
	if (!a || !b) {
		return -1;
	}
	int diff;
	diff = a->x - b->x;
	if (diff) {
		return diff;
	}
	diff = a->y - b->y;
	return diff;
}
