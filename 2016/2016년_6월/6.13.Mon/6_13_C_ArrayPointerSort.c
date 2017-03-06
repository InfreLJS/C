#include <stdio.h>

void sort(int * data);
void sort2(int * data);

int main() {
	FILE * in = fopen("input2.txt", "r");

	int data[10];
	int a;

	for (a = 0; a < 10; a++) {
		fscanf(in, "%d", &data[a]);
	}

	sort2(data);

	for (a = 0; a < 10; a++) {
		printf("%4d", data[a]);
	}
	printf("\n");

	return 0;
}

void sort(int * data) {
	int a, b, temp;

	for (a = 1; a < 10; a++) {
		for (b = 0; b < 10 - a; b++) {
			if (*(data + b) < *(data + b + 1)) {
				temp = *(data + b);
				*(data + b) = *(data + b + 1);
				*(data + b + 1) = temp;
			}
		}
	}
}

void sort2(int * data) {
	int a, b, temp;

	for (a = 0; a < 9; a++) {
		for (b = a + 1; b < 10; b++) {
			if (*(data + a) < *(data + b)) {
				temp = *(data + a);
				*(data + a) = *(data + b);
				*(data + b) = temp;
			}
		}
	}
}