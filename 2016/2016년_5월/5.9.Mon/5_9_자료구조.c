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
	printf("%d �߰�\n", Queue[rear]);
}

int Delete() {
	if (front == rear) {
		printf("�ڷᰡ �����ϴ�.\n");
		return;
	}
	printf("%d ����\n", Queue[++front]);
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