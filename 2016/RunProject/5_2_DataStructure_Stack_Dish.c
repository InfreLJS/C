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
		printf("1. ���� �ױ� 2. ���� ���� 3. ���� ���� Ȯ��(����) : ");
		scanf("%d", &cho);

		switch (cho) {
		case 1:
			Push();
			break;
		case 2:
			ch = Pop();
			if (ch != -1)
				printf("%c ���� ����.\n", ch);
			else
				printf("���� ����.\n");
			break;
		case 3:
			ch = Pop();
			printf("\n");
			while (ch != -1) {
				printf("%c ���� ", ch);
				ch = Pop();
			}
			printf("\n");
			printf("\n");
			return 0;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
		}
	}
}

void Push() {
	if (top == STACKSIZE) {
		printf("�� �̻� ���ø� ���� �� �����ϴ�.\n");
		return;
	}

	Stack[top++] = ch;
	printf("%c ���� ����.\n", ch);

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