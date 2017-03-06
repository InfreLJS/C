#include <stdio.h>

#define STR_MAX 20

void rev(char * input);

int main() {
	int len = STR_MAX;
	char input[STR_MAX];

	scanf("%s", input);

	printf("%s\n\n\n", input);

	while (len > 0) {
		printf("%c", input[--len]);
	}

	printf("\n\n");
	return 0;
}