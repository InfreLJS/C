#include <stdio.h>

int main() {
	int year, month, week, day, cnt = 1;

	printf("\n\n\n    년도 월 입력 : ");
	scanf("%d %d", &year, &month);

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
			printf("%d월은 없는 달입니다.\n", month);
			return -1;
	}

	printf("\n\n\n\t\t%d년 %d월\n\n\t", year, month);
	while (cnt <= day) {
		printf("%2d ", cnt);
		if (cnt % 7 == 0)
			printf("\n\t");
		cnt++;
	}

	printf("\n\n");
	return 0;
}