#include <stdio.h>
#include <Windows.h>

int main() {
	int i, size = 10000;
	int * a = (int *)malloc(size);

	printf("%x\n", a);

	realloc(a, size * 3);

	printf("%x\n", a);

	free(a);

	return 0;
}