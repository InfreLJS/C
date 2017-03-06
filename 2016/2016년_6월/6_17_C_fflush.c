/*
언제 : 2016년 6월 17일 1, 2교시

어디서 : 1학년 1반 교실

누가 : 이재석

무엇을 : 입력버퍼 초기화

왜 : C언어 수업

어떻게 : C언어
*/

#include <stdio.h>

int main() {
	int a, b;

	printf("입력1 : ");
	scanf("%c", &a);

//	fflush(stdin);
	while (getchar() != '\n');

	printf("입력2 : ");
	scanf("%c", &b);

	printf("출력 1: %c\n", a);
	printf("출력 2: %c\n", b);
	printf("출력 2와 한 줄만 개행되어야 정상인 문장\n");

	return 0;
}