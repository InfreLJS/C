#include <stdio.h>

int main() {
	int a = 0;

	while (getchar() != EOF) {
		a++;
		while (getchar() != '\n');
	}

	printf("%d\n", a);
}