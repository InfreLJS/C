#include <stdio.h>
#include <string.h>

int main() {
	char * arr[10] = { NULL };
	int a, b;

	for (a = 0; a < 10; a++) {
		for (b = 0; b <= a + 1; b++) {
			strcat(*arr[a], "A");
		}
	}

	for (a = 0; a < 10; a++) {
		printf("%X => %s\n", arr[a], arr[a]);
	}

	return 0;
}