#include <stdio.h>
#include <time.h>
#include <Windows.h>
int main() {
	time_t pre, now;
	struct tm *d;
	char week[7][3] = { "��","��","ȭ","��","��","��","��" };

	pre = time(NULL);
	while (1) {
		now = time(NULL);
		d = localtime(&now);
		if (pre != now) {
			printf("���� ��¥�� �ð� : %s", asctime(d));
			printf("%d�� ", d->tm_year + 1900);
			printf("%d�� ", d->tm_mon + 1);
			printf("%d�� ", d->tm_mday);
			printf("%s���� ", week[d->tm_wday]);
			printf("%d�� ", d->tm_hour);
			printf("%d�� ", d->tm_min);
			printf("%d��\n", d->tm_sec);

			pre = now;
		}
		Sleep(1);
	}

	return 0;
}