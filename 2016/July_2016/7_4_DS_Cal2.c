#include <stdio.h>
#include <conio.h>

int ADD();
int SUB();
int MUL();
double DIV();

int main() {
	int sel, a, b;

	while (1) {
		printf("< �����ȣ ���� +, -, *, /, esc >\n");
		sel = getch();
		if (sel == 224) continue;

		switch (sel) {
		case 43:
			printf("��� ����� : %d\n", ADD());
			break;
		case 45:
			printf("��� ����� : %d\n", SUB());
			break;
		case 42:
			printf("��� ����� : %d\n", MUL());
			break;
		case 47:
			printf("��� ����� : %.2lf\n", DIV());
			break;
		case 27:
			printf("�����մϴ�.\n");
			return 0;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
		}
	}
}

int ADD() {
	int a, b;

	printf("����� �� ���ڸ� �Է� : ");
	scanf("%d %d", &a, &b);

	return (a + b);
}

int SUB() {
	int a, b;

	printf("����� �� ���ڸ� �Է� : ");
	scanf("%d %d", &a, &b);

	return (a - b);
}

int MUL() {
	int a, b;

	printf("����� �� ���ڸ� �Է� : ");
	scanf("%d %d", &a, &b);

	return (a * b);
}

double DIV() {
	int a, b;

	printf("����� �� ���ڸ� �Է� : ");
	scanf("%d %d", &a, &b);

	return ((double)a / b);
}