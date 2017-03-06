// front, rear : -1

#include <stdio.h>
#define QUEUESIZE 5
#define ERROR_VALUE 0xffffffff

int Queue[QUEUESIZE];
int front = -1, rear = -1;

void Add(int data) {
	if (rear == (QUEUESIZE - 1)) {
		printf("�� �̻� �ڷḦ ������ �� �����ϴ�.\n");
		return;
	}
	Queue[++rear] = data;
	printf("%d �߰�\n", Queue[rear]);
}

int Delete() {
	if (front == rear) {
		printf("�ڷᰡ �����ϴ�.\n");
		return ERROR_VALUE;
	}
	return Queue[++front];
}

int main() {
	Add(10);
	Add(20);
	Add(30);
	Add(40);
	Add(50);
	printf("Delete %d\n", Delete());
	printf("Delete %d\n", Delete());
	printf("Delete %d\n", Delete());
	printf("Delete %d\n", Delete());
	printf("Delete %d\n", Delete());
	Add(70);
	Add(80);
	Add(90);
	Add(100);
	Add(110);
	printf("Delete %d\n", Delete());
	printf("Delete %d\n", Delete());
	printf("Delete %d\n", Delete());
	printf("Delete %d\n", Delete());
	printf("Delete %d\n", Delete());

	return 0;
}