#include <stdio.h>

int LSearch(int arr[], int len, int target) {
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == target)
			return i;
	}
	return -1;
}

int main() {
	int select = 0;
	int Arr[5];
	int index;

	printf("�迭�� �� ���ڸ� �Է��ϼ���. >> ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &Arr[i]);
	}
	printf("ã�� ���ڸ� �Է��ϼ���. >> ");
	scanf("%d", &select);
	index = LSearch(Arr, sizeof(Arr) / sizeof(int), select);

	if (index == -1)
		printf("Search Failed!\n");
	else
		printf("Target Index : %d\n", index);

	return 0;
}