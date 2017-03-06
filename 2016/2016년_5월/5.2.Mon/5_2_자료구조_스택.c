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
	printf("%d ���.\n", Pop());
	Push(400);
	Push(500);
	Push(600);
	Push(700);
	printf("%d ���.\n", Pop());
	printf("%d ���.\n", Pop());
	printf("%d ���.\n", Pop());
	printf("%d ���.\n", Pop());
	printf("%d ���.\n", Pop());
}

void Push(int data) {
	if (top == STACKSIZE) {
		printf("�� �̻� �ڷḦ ������ �� �����ϴ�.\n");
		return;
	}

	Stack[top++] = data;
	printf("%d �Է� �Ϸ�\n", data);

	return;
}

int Pop() {
	if (top == bottom) {
		printf("�ڷᰡ �����ϴ�.\n");
		return;
	}

	return Stack[--top];
}