#include <stdio.h>

int BSearch(int arr[], int begin, int end, int key) {
	int middle = (begin + end) / 2;
	if (key == arr[middle])
		return middle;
	else if (key < arr[middle])
		return BSearch(arr, begin, middle - 1, key);
	else if (key > arr[middle])
		return BSearch(arr, middle + 1, end, key);
	else
		return -1;
}

int main() {
	int select = 0;
	int Arr[5];
	int index;

	printf("배열에 들어갈 숫자를 입력하세요. >> ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &Arr[i]);
	}
	printf("찾을 숫자를 입력하세요. >> ");
	scanf("%d", &select);
	index = BSearch(Arr, 0, 4, select);

	if (index == -1)
		printf("Search Failed!\n");
	else
		printf("Target Index : %d\n", index);

	return 0;
}