#include <stdio.h>

#define STACKSIZE 5

int Stack[STACKSIZE];
int top = 0, bottom = 0;

void Push(int data);
int Pop();

int main() {
	Push(100);
	Push(200);
	Push(300);
	printf("%d 출력.\n", Pop());
	Push(400);
	Push(500);
	Push(600);
	Push(700);
	printf("%d 출력.\n", Pop());
	printf("%d 출력.\n", Pop());
	printf("%d 출력.\n", Pop());
	printf("%d 출력.\n", Pop());
	printf("%d 출력.\n", Pop());
}

void Push(int data) {
	if (top == STACKSIZE) {
		printf("더 이상 자료를 저장할 수 없습니다.\n");
		return;
	}

	Stack[top++] = data;
	printf("%d 입력 완료\n", data);

	return;
}

int Pop() {
	if (top == bottom) {
		printf("자료가 없습니다.\n");
		return;
	}

	return Stack[--top];
}