#include <stdio.h>

int main() {
	int n = 20;
	int *np = &n;
	int **npp = &np;

	printf("%x %x %x\n", &n, &np, &npp);
	printf("%x %x %x\n", &n+1, &np+1, &npp+1);
	printf("%x %x %x\n", n, np, npp);
	printf("%x %x %x\n", n+1, np+1, npp+1);

	return 0;
}