#include <stdio.h>

int main() {
	int x, y, s, ss, m;
	char a[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };

	s = 1;
	ss = s;
	scanf("%d %d", &x, &y);

	while (s <= y) {
		s = s * x;
	}
	while (s != ss) {
		if (s > ss) {
			s = s / x;
		}
		m = y / s;
		printf("%1c", a[m]);
		y = y - (m * s);
	}
	printf("\n");

	return 0;
}