#include <stdio.h>

void Change(int *a, int *b);
void SelectionSort(int arr[], int n);
void BubbleSort(int arr[], int n);
void InsertionSort(int arr[], int n);
void PrintArray(int arr[], int n);

int main() {
	int arr[10] = { 19,11,21,7,17,15,9,16,14,41 };

	PrintArray(arr, 10);
//	InsertionSort(arr, 10);
	BubbleSort(arr, 10);
	PrintArray(arr, 10);

	return 0;
}

void Change(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void SelectionSort(int arr[], int n) {
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = i; j < n; j++) {
			if (arr[i] > arr[j]) {
				Change(&arr[i], &arr[j]);
			}
		}
	}
}

void BubbleSort(int arr[], int n) {
	int i = 0, j, flag;


}

void InsertionSort(int arr[], int n) {
	int i, j, k, temp;
	
	for (i = 1; i < n; i++) {
		temp = arr[i];
		for (j = i; j > 0; j--) {
			if (temp < arr[j - 1])
				arr[j] = arr[j - 1];
			else
				break;
		}
		arr[j] = temp;
	}
}

void PrintArray(int arr[], int n) {
	int i;

	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}