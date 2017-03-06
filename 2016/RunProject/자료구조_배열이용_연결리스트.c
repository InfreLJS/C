// 배열을 이용한 Linked List

#include <stdio.h>

int List[2][5];
int list_index;

int main() {
	int a;

	printf("정수 5개 입력 : ");
	for (a = 0; a < 5; a++) {
		scanf("%d", &List[0][a]);
	}

	printf("Index 5개 입력 : ");
	for (a = 0; a < 5; a++) {
		scanf("%d", &List[1][a]);
	}

	list_index = 0;

	for (a = 0; a < 5; a++) {
		printf("%d ", List[0][list_index]);
		list_index = List[1][list_index];
		if (list_index == 0)
			break;
	}
	printf("\n");

	return 0;
}