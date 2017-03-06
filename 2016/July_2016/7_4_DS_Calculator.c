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
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			continue;
		}

		printf("����� �� ���ڸ� �Է� : ");
		scanf("%d %d", &a, &b);

		switch (sel) {
		case 1:
			printf("��� ����� : %d\n", ADD(a, b));
			break;
		case 2:
			printf("��� ����� : %d\n", SUB(a, b));
			break;
		case 3:
			printf("��� ����� : %d\n", MUL(a, b));
			break;
		case 4:
			printf("��� ����� : %.2lf\n", DIV(a, b));
			break;
		case 5:
			printf("�����մϴ�.\n");
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