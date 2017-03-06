#include <stdio.h>

int main() {
	int pas[102][102] = { 0 };
	int a, b, n, s;
	pas[1][1] = 1;

	printf("줄 수 입력(1 이상 100 이하) : ");
	scanf("%d", &n);

	if (n < 1 || n > 100) {
		printf("범위 초과\n");
		return -1;
	}

	for (a = 1; a < n; a++) {
		for (b = 1; b < n + 1; b++) {
			pas[a + 1][b] = pas[a][b - 1] + pas[a][b];
		}
	}

	for (a = 1; a < n + 1; a++) {
		printf("\n%2d", a);
		s = 0;
		for (b = 0; b < n - a; b++) {
			printf("  ");
		}
		for (b = 1; b < n + 1; b++) {
			s += pas[a][b];
			if (pas[a][b] != 0)
				printf("%4d", pas[a][b]);
		}
		printf(" ......... %d", s);
	}
	printf("\n\n");

	return 0;
}