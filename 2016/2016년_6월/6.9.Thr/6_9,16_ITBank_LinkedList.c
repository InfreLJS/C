#include <stdio.h>

typedef struct node {
	int data;
	struct node * next;
} NODE;

void DELETE(NODE * delnode);
void ADD(NODE * tail, int data);
void PRINT(NODE * head);

int main() {
	FILE * in = fopen("D:\\Dropbox\\DSM\\1ÇÐ³â\\C_Programming\\FILES\\input2.txt", "r");
	NODE * head = (NODE *)malloc(sizeof(NODE));
	NODE * tail = (NODE *)malloc(sizeof(NODE));
	int a;

	fscanf(in, "%d", &head->data);
	head->next = tail;
	fscanf(in, "%d", &tail->data);
	tail->next = NULL;

	fscanf(in, "%d", &a);
	ADD(tail, a);
	fscanf(in, "%d", &a);
	ADD(tail->next, a);
	fscanf(in, "%d", &a);
	ADD(tail->next->next, a);
	PRINT(head);
	return 0;
}

void DELETE(NODE * delnode) {
	
}

void ADD(NODE * tail, int data) {
	NODE * Addnode = (NODE *)malloc(sizeof(NODE));
	Addnode->data = data;
	Addnode->next = NULL;
	tail->next = Addnode;
}

void PRINT(NODE * head) {
	printf("°ª : %d\n", head->data);
	puts("");
	if (head->next != NULL)
		PRINT(head->next);
}