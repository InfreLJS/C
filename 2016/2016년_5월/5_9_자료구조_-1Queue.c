#include <stdio.h>
#define QUEUESIZE 5

int Queue[QUEUESIZE];
int front = -1, rear = -1;

void Add(int data) {
	if (rear + 1 == QUEUESIZE) {
		printf("�� �̻� �ڷḦ ������ �� �����ϴ�.\n");
		return;
	}
	Queue[++rear] = data;
}

int Delete() {
	if (front == rear) {
		printf("�ڷᰡ �����ϴ�.\n");
		return;
	}
	return Queue[front];
}

int main() {
	Add(10);
	Add(20);
	printf("%d ����\n", Delete());
	Add(30);
	Add(40);
	Add(50);
	Add(60);
	Add(70);
	printf("%d ����\n", Delete());
	printf("%d ����\n", Delete());
	printf("%d ����\n", Delete());
	printf("%d ����\n", Delete());
	printf("%d ����\n", Delete());
	printf("%d ����\n", Delete());
}