#include <stdio.h>

#define STACKSIZE 5

int Stack[STACKSIZE];
int top = 0, bottom = 0;
char ch = 'A';

void Push();
char Pop();

int main() {
	int cho;
	char ch;

	while (1) {
		printf("1. 접시 쌓기 2. 접시 빼기 3. 남은 접시 확인(종료) : ");
		scanf("%d", &cho);

		switch (cho) {
		case 1:
			Push();
			break;
		case 2:
			ch = Pop();
			if (ch != -1)
				printf("%c 접시 빠짐.\n", ch);
			else
				printf("접시 없음.\n");
			break;
		case 3:
			ch = Pop();
			printf("\n");
			while (ch != -1) {
				printf("%c 접시 ", ch);
				ch = Pop();
			}
			printf("\n");
			printf("\n");
			return 0;
		default:
			printf("잘못 입력하셨습니다.\n");
		}
	}
}

void Push() {
	if (top == STACKSIZE) {
		printf("더 이상 접시를 쌓을 수 없습니다.\n");
		return;
	}

	Stack[top++] = ch;
	printf("%c 접시 쌓임.\n", ch);

	if (ch == 'Z')
		ch = 'A';
	else
		ch++;

	return;
}

char Pop() {
	if (top == bottom) {
		return -1;
	}

	return Stack[--top];
}