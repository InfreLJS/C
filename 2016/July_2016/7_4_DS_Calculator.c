#include <stdio.h>

int ADD(int a, int b);
int SUB(int a, int b);
int MUL(int a, int b);
double DIV(int a, int b);

int main() {
	int sel, a, b;

	while (1) {
		printf("< 1:+, 2:-, 3:*, 4:/, 5:Exit > : ");
		scanf(" %d", &sel);

		if ((sel >= 1 && sel <= 5) == 0) {
			printf("잘못 입력하셨습니다.\n");
			continue;
		}

		printf("계산할 두 숫자를 입력 : ");
		scanf("%d %d", &a, &b);

		switch (sel) {
		case 1:
			printf("계산 결과는 : %d\n", ADD(a, b));
			break;
		case 2:
			printf("계산 결과는 : %d\n", SUB(a, b));
			break;
		case 3:
			printf("계산 결과는 : %d\n", MUL(a, b));
			break;
		case 4:
			printf("계산 결과는 : %.2lf\n", DIV(a, b));
			break;
		case 5:
			printf("종료합니다.\n");
			return 0;
		}
	}
}

int ADD(int a, int b) {
	return (a + b);
}

int SUB(int a, int b) {
	return (a - b);
}

int MUL(int a, int b) {
	return (a * b);
}

double DIV(int a, int b) {
	return ((double)a / b);
}