#include <stdio.h>
#define STACKSIZE 20

int main()
{
	char stack[STACKSIZE];
	int top = 0, b;

	printf("���� �Է� : ");
	stack[top] = getchar();
	getchar();

	while ((stack[top] != 'Q') && (top < 19))
	{
		top++;
		printf("���� �Է� : ");
		stack[top] = getchar();
		getchar();
	}

	printf("���� ���\n");

	for (b = top; b >= 0; b--) 
	{
		printf("stack[%d] : %c\n", b, stack[b]);
	}

	printf("\n");
	return 0;
}