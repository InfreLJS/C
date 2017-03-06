#include <stdio.h>

int get_week(int y, int m, int d);

int main() {
	int y, m, d, w;
	char wname[7][3] = { "일","월","화","수","목","금","토" };

	printf("년도 월 일 입력 : ");
	scanf("%d %d %d", &y, &m, &d);
	w = get_week(y, m, d);

	printf("%d년 %d월 %d일은 %c%c요일 입니다.\n", y, m, d, wname[w][0], wname[w][1]);
	return 0;
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