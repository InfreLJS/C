#include <stdio.h>

int main() {
	int a, n, cnt = 0;
	char bin[10];

	scanf("%d", &n);

	while (n != 0) {
		bin[cnt] = n % 2;
		n = n / 2;
		cnt++;
	}

	printf("2Áø¼ö : ");
	for (a = cnt - 1; a >= 0; a--) {
		printf("%1d", bin[a]);
	}
	printf("\n\n");

	return 0;
}