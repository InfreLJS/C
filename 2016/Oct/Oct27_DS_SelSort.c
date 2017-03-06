#include <stdio.h>

void SelSort(int arr[], int n) {
	int i, j, temp, min;
	int changeCount = 0;

	for (i = 0; i < n - 1; i++) {
		min = i;
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
		if (i != min) {
			changeCount++;
		}
	}

	printf("�� �ܰ� ���� %dȸ �Դϴ�.\n", n - 1);
	printf("�ڸ� ��ȯ Ƚ���� %dȸ �Դϴ�.\n", changeCount);
}

int main() {
	int arr[5];
	int k;

	printf("���� 5�� �Է� : ");
	for (k = 0; k < 5; k++) {
		scanf("%d", &arr[k]);
	}

	SelSort(arr, sizeof(arr) / sizeof(int));

	for (k = 0; k < 5; k++) {
		printf("%d    ", arr[k]);
	}
	printf("\n");

	return 0;
}