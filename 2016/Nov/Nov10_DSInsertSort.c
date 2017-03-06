#include <stdio.h>

int main() {
	int numbers[5] = { 11,9,15,5,2 };
	int i, j, cnt = sizeof(numbers) / sizeof(int);
	int countOfChange = 0, countOfCompare = 0;

	for (i = 1; i <= cnt - 1; i++) {
		int temp = numbers[i];

		for (j = i - 1; j >= 0; j--) {
			countOfCompare++;
			if (numbers[j] > temp) {
				numbers[j + 1] = numbers[j];
			}
			else {
				break;
			}
		}
		countOfChange++;
		numbers[j + 1] = temp;
	}

	for (i = 0; i < cnt; i++) {
		printf("%d ", numbers[i]);
	}
	printf("\n");
	printf("ºñ±³ È½¼ö : %d, ±³È¯ È½¼ö : %d\n", countOfCompare, countOfChange);
}