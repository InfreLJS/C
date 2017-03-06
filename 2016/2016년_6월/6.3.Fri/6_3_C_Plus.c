#include <stdio.h>

int main() {
	int a, b, n, s = 0;

	printf("수 입력(1 이상) : ");
	scanf("%d", &n);

	if (n < 1) {
		printf("잘못 입력하셨습니다.\n");
		return -1;
	}

	for (a = 1; a <= n; a++) {
		for (b = 1; b <= n; b++) {
			if (a > n + 1 - b)
				break;
			s += a;
		}
	}

	printf("%d\n", s);

	return 0;
}