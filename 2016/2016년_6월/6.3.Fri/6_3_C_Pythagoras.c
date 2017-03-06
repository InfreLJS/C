#include <stdio.h>

int main() {
	int a, b, c, count = 0, re[99] = { 0 };

	for (a = 1; a <= 100; a++) {
		for (b = 1; b <= 100; b++) {
			for (c = 1; c <= 100; c++) {
				if ((a*a) + (b*b) == (c*c)) {
					count++;
					printf("[%3d]   a : %3d  b : %3d  c : %3d\n", count, a, b, c);
				}
			}
		}
	}

	printf("\n");
	return 0;
}