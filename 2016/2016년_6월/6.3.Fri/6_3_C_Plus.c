#include <stdio.h>

int main() {
	int a, b, n, s = 0;

	printf("�� �Է�(1 �̻�) : ");
	scanf("%d", &n);

	if (n < 1) {
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
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