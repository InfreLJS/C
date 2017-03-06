#include <stdio.h>

void cal_prt(int num, int lim); // 0~6 �Է��ϸ� ��ĭ ����� �޷� ����ϴ� �Լ�
int getMonth(int year, int month); // �⵵, �� �Է��ϸ� �� ��ȯ�ϴ� �Լ�
int get_week(int y, int m, int d); // ��, ��, �� �Է��ϸ� ���� ������ִ� �Լ�


int main() {
	int y, m, d, w, lim;

	printf("���� �Է� : "); // ���� �Է¹ޱ�
	scanf("%d", &y);

	for (m = 1; m <= 12; m++) {
		w = get_week(y, m, 1);
		lim = getMonth(y, m);
		printf("\n\n\t%2d��\n\n", m);
		printf(" �� �� ȭ �� �� �� ��\n");
		cal_prt(w, lim);
	}

	return 0;
}

void cal_prt(int num, int lim) {
	int blank, day;

	num = num % 7;
	for (blank = 1; blank <= num; blank++) {
		printf("   ");
	}
	for (day = 1; day <= lim; day++, blank++) {
		printf("%3d", day);
		if (blank % 7 == 0) {
			printf("\n");
		}
	}
	printf("\n");
}

int getMonth(int year, int month) {
	int day;

	switch (month) {
	case 2:
		if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) day = 29;
		else day = 28;
		break;
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		day = 31;
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		day = 30;
		break;
	default:
		return 0;
	}
	return day;
}

int get_week(int y, int m, int d) {
	int w;

	if (m == 1 || m == 2) {
		y--;
		m += 12;
	}
	w = (y + y / 4 - y / 100 + y / 400 + (13 * m + 8) / 5 + d) % 7;

	return w;
}
