/*
���� : 2016�� 6�� 17�� 1, 2����

��� : 1�г� 1�� ����

���� : ���缮

������ : �ִ�����, �ּҰ���� ���ϱ� (��Ŭ���� ȣ���� �̿�)

�� : C��� ����

��� : C���
*/

// �� ���� �ִ�����, �ּҰ����

#include <stdio.h>

int main() {
	int gcd, lcm, nmg, big, small, a, b, cnt;

	printf("�� �� �Է� : ");
	scanf("%d %d", &a, &b);

	big = (a > b) ? a : b;
	small = (big == b) ? a : b;

	while (1) {
		nmg = big % small;
		if (nmg == 0)
			break;
		big = small;
		small = nmg;
	}

	gcd = small;
	lcm = a*b / gcd;

	printf("�ִ����� : %d\n", gcd);
	printf("�ּҰ���� : %d\n", lcm);

	return 0;
}

// �� ���� �ִ�����, �ּҰ���� �Լ�ȭ

#include <stdio.h>

int GCDLCM(int a, int b);

int main() {
	int a, b;

	printf("�� �� �Է� : ");
	scanf("%d %d", &a, &b);

	GCDLCM(a, b);

	return 0;
}

int GCDLCM(int a, int b) {
	int big, small, gcd, lcm, nmg;

	big = (a > b) ? a : b;
	small = (big == b) ? a : b;

	while (1) {
		nmg = big % small;
		if (nmg == 0)
			break;
		big = small;
		small = nmg;
	}

	gcd = small;
	lcm = a*b / gcd;

	printf("�ִ����� : %d\n", gcd);
	printf("�ּҰ���� : %d\n", lcm);

	return 0;
}