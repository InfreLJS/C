#include <stdio.h>

int main() {
	char ch;

	while (1) {
		puts("입력 : ");
		ch = getchar();

		if (ch == EOF)
			break;

		while (getchar() != '\n');

		if (ch >= 'a' && ch <= 'z') {
			puts("입력하신 문자는 알파벳 소문자입니다.");
		}
		else if (ch >= 'A' && ch <= 'Z') {
			puts("입력하신 문자는 알파벳 대문자입니다.");
		}
		else if (ch >= '0' && ch <= '9') {
			puts("입력하신 문자는 아라비아 숫자입니다.");
		}
		else {
			puts("입력하신 문자는 특수문자입니다.");
		}
	}

	puts("프로그램을 종료합니다.");
	return 0;
}