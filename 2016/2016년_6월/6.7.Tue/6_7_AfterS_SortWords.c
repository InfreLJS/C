#include <stdio.h>
#include <string.h>
#define STRNUM 5

int main() {
	char ch[STRNUM][7];
	char temp[7];
	int a, b;

	for (a = 0; a < 5; a++) {
		fputs("문자열 입력 : ", stdout);
		gets(ch[a]);
	}

	for (a = 0; a < STRNUM - 1; a++) {
		for (b = 0; b < (STRNUM - a) - 1; b++) {
			if (strlen(ch[b]) > strlen(ch[b + 1])) {
				strcpy(temp, ch[b]);
				strcpy(ch[b], ch[b + 1]);
				strcpy(ch[b + 1], temp);
			}
		}
	}

	for (a = 0; a < 5; a++) {
		puts(ch[a]);
	}
}