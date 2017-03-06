/*
언제 : 2016년 6월 16일 5, 6교시

어디서 : 1학년 1반 교실

누가 : 이재석

무엇을 : 최대공약수 구하기 (배열 이용)

왜 : C언어 수업

어떻게 : C언어
*/

#include <stdio.h>
#define ARRMAX 100  // 배열 크기 상수

int main() {
	int in1, in2, cnt1, cnt2;  // 입력 값 in1, in2, 카운터 변수 cnt1, cnt2
	int d1_index = 1, d2_index = 1, d3_index = 0, max = 0;  // 인덱스 값 d1, d2 ,d3, 최대공약수 max
	int d1[ARRMAX] = { 1 }, d2[ARRMAX] = { 1 }, d3[ARRMAX] = { 1 };  // 약수 배열 d1, d2, 공약수 배열 d3

	printf("두 수 입력 : ");
	scanf("%d %d", &in1, &in2);  // 입력 값 받기

	// 약수 구하기
	for (cnt1 = 2; cnt1 <= in1; cnt1++) {
		if (in1 % cnt1 == 0) {
			d1[d1_index] = cnt1;
			d1_index++;
		}
	}
	for (cnt1 = 2; cnt1 <= in2; cnt1++) {
		if (in2 % cnt1 == 0) {
			d2[d2_index] = cnt1;
			d2_index++;
		}
	}

	// 공약수, 최대공약수 구하기
	for (cnt1 = 0; cnt1 < d1_index; cnt1++) {
		for (cnt2 = 0; cnt2 < d2_index; cnt2++) {
			if (d1[cnt1] == d2[cnt2]) {  // 공약수 구하기
				d3[d3_index] = d1[cnt1];
				d3_index++;
				if (d1[cnt1] > max)  // 최대공약수 구하기
					max = d1[cnt1];
			}
		}
	}

	// 출력
	printf("\n%d의 약수 : ", in1);  // in1 약수 d1 출력
	for (cnt1 = 0; cnt1 < d1_index; cnt1++) {
		printf("%d ", d1[cnt1]);
	}

	printf("\n\n%d의 약수 : ", in2);  // in2 약수 d2 출력
	for (cnt1 = 0; cnt1 < d2_index; cnt1++) {
		printf("%d ", d2[cnt1]);
	}

	printf("\n\n%d과 %d의 공약수 : ", in1, in2);  // 공약수 d3 출력
	for (cnt1 = 0; cnt1 < d3_index; cnt1++) {
		printf("%d ", d3[cnt1]);
	}

	printf("\n\n%d과 %d의 최대공약수 : %d\n\n", in1, in2, max);  // 최대공약수 max 출력

	// 프로그램 종료
	return 0;
}