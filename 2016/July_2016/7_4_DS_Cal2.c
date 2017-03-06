#include <stdio.h>
#include <conio.h>

int ADD();
int SUB();
int MUL();
double DIV();

int main() {
	int sel, a, b;

	while (1) {
		printf("< 연산기호 선택 +, -, *, /, esc >\n");
		sel = getch();
		if (sel == 224) continue;

		switch (sel) {
		case 43:
			printf("계산 결과는 : %d\n", ADD());
			break;
		case 45:
			printf("계산 결과는 : %d\n", SUB());
			break;
		case 42:
			printf("계산 결과는 : %d\n", MUL());
			break;
		case 47:
			printf("계산 결과는 : %.2lf\n", DIV());
			break;
		case 27:
			printf("종료합니다.\n");
			return 0;
		default:
			printf("잘못 입력하셨습니다.\n");
		}
	}
}

int ADD() {
	int a, b;

	printf("계산할 두 숫자를 입력 : ");
	scanf("%d %d", &a, &b);

	return (a + b);
}

int SUB() {
	int a, b;

	printf("계산할 두 숫자를 입력 : ");
	scanf("%d %d", &a, &b);

	return (a - b);
}

int MUL() {
	int a, b;

	printf("계산할 두 숫자를 입력 : ");
	scanf("%d %d", &a, &b);

	return (a * b);
}

double DIV() {
	int a, b;

	printf("계산할 두 숫자를 입력 : ");
	scanf("%d %d", &a, &b);

	return ((double)a / b);
}