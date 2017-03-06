#include <stdio.h>
#include <string.h>

int main() {
	char str[20];
	int i;

	printf("Input >> ");
	gets_s(str, sizeof(str));

	for (i = strlen(str) - 1; i >= 0; i--) {
		printf("%c", str[i]);
	}
	printf("\n");

	return 0;
}