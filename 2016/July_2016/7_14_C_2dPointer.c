#include <stdio.h>

void f(int **a);

int main() {
	int a[10][10] = { 9 };

	f(a);

	return 0;
}

void f(int a[10][10]) {
	printf("%d", a[0][0]);
}