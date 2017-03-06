#include <stdio.h>

int main() {
	int a, b, c, d;
	int SUB, DIV;

	printf("네 수를 입력하세요.\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	SUB = a - b - c - d;
	DIV = a / b / c / d;

	printf("SUB : %d, DIV : %d\n", SUB, DIV);
}