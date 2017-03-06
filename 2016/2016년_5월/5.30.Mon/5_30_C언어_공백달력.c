#include <stdio.h>

int getWeek();
void cal_prt(int num);

int main() {
	int num;

	num = getWeek();
	cal_prt(num);

	return 0;
}

int getWeek() {
	int week;

	printf("숫자 입력 : ");
	scanf("%d", &week);

	return week;
}

void cal_prt(int num) {
	int blank, day;

	num = num % 7;
	for (blank = 1; blank <= num; blank++) {
		printf("   ");
	}
	for (day = 1; day <= 31; day++, blank++) {
		printf("%3d", day);
		if (blank % 7 == 0) {
			printf("\n");
		}
	}
	printf("\n\n");
}