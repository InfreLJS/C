#include <stdio.h>

void CtoS(char * ch) {
	int cnt = 0;

	while (ch[cnt] != '\0') {
		if (ch[cnt] >= 'A' && ch[cnt] <= 'Z') {
			ch[cnt] += 32;
		}
		cnt++;
	}

	return;
}