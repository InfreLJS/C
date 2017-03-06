// flag를 사용한 원형 큐

#include <stdio.h>
#define QUEUESIZE 5
#define ERROR_VALUE 0xffffffff

int Queue[QUEUESIZE];
int front = 0, rear = 0, flag = 0;

void Add(int data) {
	if (flag == 0) {
		if ((rear + 1) % QUEUESIZE == front) {
			flag = 1;
		}
		Queue[rear = (rear + 1) % QUEUESIZE] = data;
		printf("%d 추가\n", Queue[rear]);
	}
	else {
		printf("더 이상 자료를 저장할 수 없습니다.\n");
		return;
	}
}

int Delete() {
	if (flag == 0) {
		if (front == rear) {
			printf("자료가 없습니다.\n");
			return ERROR_VALUE;
		}
		return Queue[front = (front + 1) % QUEUESIZE];
	}
	else {
		flag = 0;
		return Queue[front = (front + 1) % QUEUESIZE];
	}
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