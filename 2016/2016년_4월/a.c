#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("\n main 함수\n");
	printf("%d", f(a, b));
	printf("\n main 함수\n");
	printf("%d", &a);
	printf("%d", &b);
	b = a;
	printf("%d", b);
	return 0;
}
