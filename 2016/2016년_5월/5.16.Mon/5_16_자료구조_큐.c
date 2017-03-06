// front, rear : 0

#include <stdio.h>
#define QUEUESIZE 5
#define ERROR_VALUE 0xffffffff

int Queue[QUEUESIZE];
int front = 0, rear = 0;
void Add(int data) {
	if (rear == QUEUESIZE) {
		printf("더 이상 자료를 저장할 수 없습니다.\n");
		return;
	}
	Queue[rear] = data;
	printf("%d 추가\n", Queue[rear]);
	rear++;
}

int Delete() {
	if (front == rear) {
		printf("자료가 없습니다.\n");
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
		printf("더 이상 자료를 저장할 수 없습니다.\n");
		return;
	}
	Queue[++rear] = data;
	printf("%d 추가\n", Queue[rear]);
}

int Delete() {
	if (front == rear) {
		printf("자료가 없습니다.\n");
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


// 원형 큐

#include <stdio.h>
#define QUEUESIZE 5
#define ERROR_VALUE 0xffffffff

int Queue[QUEUESIZE];
int front = 0, rear = 0;
void Add(int data) {
	if ((rear + 1) % QUEUESIZE == front) {
		printf("더 이상 자료를 저장할 수 없습니다.\n");
		return;
	}
	Queue[rear = (rear + 1) % QUEUESIZE] = data;
	printf("%d 추가\n", Queue[rear]);
}

int Delete() {
	if (front == rear) {
		printf("자료가 없습니다.\n");
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