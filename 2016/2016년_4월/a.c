#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("\n main �Լ�\n");
	printf("%d", f(a, b));
	printf("\n main �Լ�\n");
	printf("%d", &a);
	printf("%d", &b);
	b = a;
	printf("%d", b);
	return 0;
}
