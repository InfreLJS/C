// �������׳׽��� ü

#include <stdio.h>
#define MAX 1001

int main() {
	int i, k, count = 0;
	int ar[MAX] = { 0 };

	for (i = 2; i < MAX; i++) {
		if (ar[i] == 0) {
			count++;
			printf("%d��° �Ҽ� : %d\n", count, i);
			for (k = i * 2; k < MAX; k += i) {
				ar[k] = 1;
			}
		}
	}
}