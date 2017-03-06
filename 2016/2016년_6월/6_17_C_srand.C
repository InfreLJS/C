#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int a, b = 0;

	srand((unsigned int)time(NULL));

	while (b < 50) {
		a = (rand() % 50 + 1);
		printf("%d\n", a);
		b++;
	}

	return 0;
}