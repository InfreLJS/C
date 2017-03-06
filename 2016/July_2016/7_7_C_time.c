#include <stdio.h>
#include <time.h>
#include <Windows.h>
int main() {
	time_t pre, now;
	struct tm *d;
	char week[7][3] = { "일","월","화","수","목","금","토" };

	pre = time(NULL);
	while (1) {
		now = time(NULL);
		d = localtime(&now);
		if (pre != now) {
			printf("현재 날짜와 시간 : %s", asctime(d));
			printf("%d년 ", d->tm_year + 1900);
			printf("%d월 ", d->tm_mon + 1);
			printf("%d일 ", d->tm_mday);
			printf("%s요일 ", week[d->tm_wday]);
			printf("%d시 ", d->tm_hour);
			printf("%d분 ", d->tm_min);
			printf("%d초\n", d->tm_sec);

			pre = now;
		}
		Sleep(1);
	}

	return 0;
}