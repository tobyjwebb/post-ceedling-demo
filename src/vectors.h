#ifndef VECTORS_H
#define VECTORS_H

struct Vector {
	int x;
	int y;
};

typedef struct Vector *vectorPtr;

// Initializes a vectorPtr area in memory with the x and y params
vectorPtr initVector(int x, int y);

// Clears the memory used by a vectorPtr
void destroyVector(vectorPtr *ptr);

// Sums two vectorPtr objects, and returns a new vectorPtr
vectorPtr sumVectors(const vectorPtr a, const vectorPtr b);

// Compares two vectorPtr objects, and return 0 if they are equal
int cmpVectors(const vectorPtr a, const vectorPtr b);

#endif // VECTORS_H
