#include <stdio.h>
#define QUEUESIZE 5

int Queue[QUEUESIZE];
int front = -1, rear = -1;

void Add(int data) {
	if (rear + 1 == QUEUESIZE) {
		printf("더 이상 자료를 저장할 수 없습니다.\n");
		return;
	}
	Queue[++rear] = data;
}

int Delete() {
	if (front == rear) {
		printf("자료가 없습니다.\n");
		return;
	}
	return Queue[front];
}

int main() {
	Add(10);
	Add(20);
	printf("%d 삭제\n", Delete());
	Add(30);
	Add(40);
	Add(50);
	Add(60);
	Add(70);
	printf("%d 삭제\n", Delete());
	printf("%d 삭제\n", Delete());
	printf("%d 삭제\n", Delete());
	printf("%d 삭제\n", Delete());
	printf("%d 삭제\n", Delete());
	printf("%d 삭제\n", Delete());
}