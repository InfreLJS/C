/*
 * pack_app.c
 *
 *  Created on: 2017. 1. 10.
 *      Author: LeeJaeseok
 */

#include <stdio.h>

struct structNoPacked {
	char len;
	int values[10];
};

typedef struct {
	char len;
	int values[10];
}__attribute__((packed)) TypePacked;

int main() {
	printf("Size of A = %d\n", sizeof(struct structNoPacked));
	printf("Size of B = %d\n", sizeof(TypePacked));
	return 0;
}
