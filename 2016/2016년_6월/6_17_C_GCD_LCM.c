/*
언제 : 2016년 6월 17일 1, 2교시

어디서 : 1학년 1반 교실

누가 : 이재석

무엇을 : 최대공약수, 최소공배수 구하기 (유클리드 호제법 이용)

왜 : C언어 수업

어떻게 : C언어
*/

// 두 수의 최대공약수, 최소공배수

#include <stdio.h>

int main() {
	int gcd, lcm, nmg, big, small, a, b, cnt;

	printf("두 수 입력 : ");
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

	printf("최대공약수 : %d\n", gcd);
	printf("최소공배수 : %d\n", lcm);

	return 0;
}

// 두 수의 최대공약수, 최소공배수 함수화

#include <stdio.h>

int GCDLCM(int a, int b);

int main() {
	int a, b;

	printf("두 수 입력 : ");
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

	printf("최대공약수 : %d\n", gcd);
	printf("최소공배수 : %d\n", lcm);

	return 0;
}