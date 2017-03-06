#include <stdio.h>
#define QUEUESIZE 5

int Queue[QUEUESIZE];
int front = 0, rear = 0, flag = 0;

void Add(int data) {
	if (flag == 0) {
		if ((rear + 1) % QUEUESIZE == front) {
			flag = 1;
			Queue[rear = (rear + 1) % QUEUESIZE] = data;
			return;
		}
		Queue[rear = (rear + 1) % QUEUESIZE] = data;
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
			return 1;
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
	Add(60);
	printf("%d\n", Delete());
	printf("%d\n", Delete());
	printf("%d\n", Delete());
	Add(70);
	Add(80);
	printf("%d\n", Delete());
	Add(90);
	printf("%d\n", Delete());
	printf("%d\n", Delete());
	printf("%d\n", Delete());
	printf("%d\n", Delete());
	printf("%d\n", Delete());
}