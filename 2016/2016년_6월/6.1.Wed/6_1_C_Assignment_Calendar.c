#include <stdio.h>

void cal_prt(int num, int lim); // 0~6 입력하면 빈칸 띄워서 달력 출력하는 함수
int getMonth(int year, int month); // 년도, 월 입력하면 일 반환하는 함수
int get_week(int y, int m, int d); // 년, 월, 일 입력하면 요일 출력해주는 함수


int main() {
	int y, m, d, w, lim;

	printf("연도 입력 : "); // 연도 입력받기
	scanf("%d", &y);

	for (m = 1; m <= 12; m++) {
		w = get_week(y, m, 1);
		lim = getMonth(y, m);
		printf("\n\n\t%2d월\n\n", m);
		printf(" 일 월 화 수 목 금 토\n");
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
