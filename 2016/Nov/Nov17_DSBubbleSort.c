#include <stdio.h>

#define SIZE 5

int main() {
	int arr[SIZE];
	int i = 0, j = 0, cnt = SIZE;

	printf("자료 %d개 입력 : ", cnt);
	for (i = 0; i < cnt; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < cnt - 1; i++) {
		for (j = 0; j < cnt - (i + 1); j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < cnt; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}