#include <stdio.h>

int get_week(int y, int m, int d);

int main() {
	int y, m, d, w;
	char wname[7][3] = { "��","��","ȭ","��","��","��","��" };

	printf("�⵵ �� �� �Է� : ");
	scanf("%d %d %d", &y, &m, &d);
	w = get_week(y, m, d);

	printf("%d�� %d�� %d���� %c%c���� �Դϴ�.\n", y, m, d, wname[w][0], wname[w][1]);
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