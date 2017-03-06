#include <stdio.h>

int value[5][5];

int f(int a, int b) {
	int sum = 0, c, d;
	for (c = a; c < a + 3; c++) {
		for (d = b; d < b + 3; d++) {
			sum += value[c][d];
		}
	}
	return sum;
}

int main() {
	int a, b, max = 0;

	for (a = 0; a < 5; a++) {
		for (b = 0; b < 5; b++) {
			scanf(" %d", &value[a][b]);
		}
	}
	for (a = 0; a < 3; a++) {
		for (b = 0; b < 3; b++) {
			if (max < f(a, b)) {
				max = f(a, b);
			}
		}
	}

	printf("%d\n", max);
	return 0;
}