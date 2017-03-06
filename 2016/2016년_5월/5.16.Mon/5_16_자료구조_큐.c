// front, rear : 0

#include <stdio.h>
#define QUEUESIZE 5
#define ERROR_VALUE 0xffffffff

int Queue[QUEUESIZE];
int front = 0, rear = 0;
void Add(int data) {
	if (rear == QUEUESIZE) {
		printf("�� �̻� �ڷḦ ������ �� �����ϴ�.\n");
		return;
	}
	Queue[rear] = data;
	printf("%d �߰�\n", Queue[rear]);
	rear++;
}

int Delete() {
	if (front == rear) {
		printf("�ڷᰡ �����ϴ�.\n");
		return ERROR_VALUE;
	}
	return Queue[front++];
}

int main() {
	Add(10);
	Add(20);
	printf("Delete %d\n", Delete());
	Add(30);
	Add(40);
	printf("Delete %d\n", Delete());
	Add(50);
	Add(60);
	printf("Delete %d\n", Delete());
	printf("Delete %d\n", Delete());
	printf("Delete %d\n", Delete());
	printf("Delete %d\n", Delete());
}


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
	printf("Delete %d\n", Delete());
	Add(30);
	Add(40);
	printf("Delete %d\n", Delete());
	Add(50);
	Add(60);
	printf("Delete %d\n", Delete());
	printf("Delete %d\n", Delete());
	printf("Delete %d\n", Delete());
	printf("Delete %d\n", Delete());
}


// ���� ť

#include <stdio.h>
#define QUEUESIZE 5
#define ERROR_VALUE 0xffffffff

int Queue[QUEUESIZE];
int front = 0, rear = 0;
void Add(int data) {
	if ((rear + 1) % QUEUESIZE == front) {
		printf("�� �̻� �ڷḦ ������ �� �����ϴ�.\n");
		return;
	}
	Queue[rear = (rear + 1) % QUEUESIZE] = data;
	printf("%d �߰�\n", Queue[rear]);
}

int Delete() {
	if (front == rear) {
		printf("�ڷᰡ �����ϴ�.\n");
		return ERROR_VALUE;
	}
	return Queue[front = (front + 1) % QUEUESIZE];
}

int main() {
	Add(10);
	Add(20);
	printf("Delete %d\n", Delete());
	Add(30);
	Add(40);
	printf("Delete %d\n", Delete());
	Add(50);
	Add(60);
	printf("Delete %d\n", Delete());
	printf("Delete %d\n", Delete());
	Add(10);
	Add(20);
	Add(10);
	Add(20);
	printf("Delete %d\n", Delete());
	printf("Delete %d\n", Delete());
	printf("Delete %d\n", Delete());
	printf("Delete %d\n", Delete());
}