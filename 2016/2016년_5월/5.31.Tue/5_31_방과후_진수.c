#include <stdio.h>

int main() {
	int a, b, s;

	printf("�� ���� 16������ �Է� : ");
	scanf("%x %x", &a, &b);
	s = a + b;
	printf("���� ���  8���� : %o\n", s);
	printf("���� ��� 10���� : %d\n", s);
	printf("���� ��� 16���� : %x\n", s);
}