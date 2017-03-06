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
	printf("%d 추가\n", Queue[rear]);
}

int Delete() {
	if (front == rear) {
		printf("자료가 없습니다.\n");
		return;
	}
	printf("%d 삭제\n", Queue[++front]);
	return Queue[front];
}

int main() {
	Add(10);
	Add(20);
	Delete();
	Add(30);
	Add(40);
	Delete();
	Add(50);
	Add(60);
	Delete();
	Delete();
	Delete();
	Delete();
}