/*
���� : 2016�� 6�� 17�� 1, 2����

��� : 1�г� 1�� ����

���� : ���缮

������ : �Է¹��� �ʱ�ȭ

�� : C��� ����

��� : C���
*/

#include <stdio.h>

int main() {
	int a, b;

	printf("�Է�1 : ");
	scanf("%c", &a);

//	fflush(stdin);
	while (getchar() != '\n');

	printf("�Է�2 : ");
	scanf("%c", &b);

	printf("��� 1: %c\n", a);
	printf("��� 2: %c\n", b);
	printf("��� 2�� �� �ٸ� ����Ǿ�� ������ ����\n");

	return 0;
}