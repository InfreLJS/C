#include <stdio.h>

int main() {
	char ch;

	while (1) {
		puts("�Է� : ");
		ch = getchar();

		if (ch == EOF)
			break;

		while (getchar() != '\n');

		if (ch >= 'a' && ch <= 'z') {
			puts("�Է��Ͻ� ���ڴ� ���ĺ� �ҹ����Դϴ�.");
		}
		else if (ch >= 'A' && ch <= 'Z') {
			puts("�Է��Ͻ� ���ڴ� ���ĺ� �빮���Դϴ�.");
		}
		else if (ch >= '0' && ch <= '9') {
			puts("�Է��Ͻ� ���ڴ� �ƶ��� �����Դϴ�.");
		}
		else {
			puts("�Է��Ͻ� ���ڴ� Ư�������Դϴ�.");
		}
	}

	puts("���α׷��� �����մϴ�.");
	return 0;
}