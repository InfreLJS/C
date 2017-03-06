#include <stdio.h>

int main() {
	int a, b, s;

	printf("두 수를 16진수로 입력 : ");
	scanf("%x %x", &a, &b);
	s = a + b;
	printf("연산 결과  8진수 : %o\n", s);
	printf("연산 결과 10진수 : %d\n", s);
	printf("연산 결과 16진수 : %x\n", s);
}