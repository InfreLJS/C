//#include <stdio.h>
//#include <string.h>
//#define ARRMAX 32
//
//int main() {
//	char ch[ARRMAX];
//	int a;
//
//	fputs("문자열 입력 : ", stdout);
//	gets(ch);
//
//	for (a = 0; ch[a] != '\0'; a++) {
//		if (ch[a] >= 'a' && ch[a] <= 'z') {
//			ch[a] -= 32;
//		}
//		else if (ch[a] >= 'A' && ch[a] <= 'Z') {
//			ch[a] += 32;
//		}
//	}
//
//	puts(ch);
//
//	return 0;
//}


#include <stdio.h>

int main() {
	char ch;

	fputs("문자열 입력 : ", stdout);
	ch = getchar();
	while (ch != '\n') {
		if (ch >= 'a' && ch <= 'z') {
			ch -= 32;
			putchar(ch);
		}
		else if (ch >= 'A' && ch <= 'Z') {
			ch += 32;
			putchar(ch);
		}
		else {
			putchar(ch);
		}
		ch = getchar();
	}
	putchar('\n');

	return 0;
}