#include <stdio.h>

#define STR_MAX 20

void rev(char * input);

int main() {
	char input[STR_MAX];

	scanf("%s", input);

	rev(input);

	printf("%s\n", input);

	return 0;
}

void rev(char * input) {
	int len = 0, cnt;
	char temp[STR_MAX];

	while (input[len + 1] != '\0') {
		len++;
	}

	for (cnt = 0; len >= 0; cnt++, len--) {
		temp[cnt] = input[len];
	}
	temp[cnt] = '\0';

	for (cnt = 0; temp[cnt] != '\0'; cnt++) {
		input[cnt] = temp[cnt];
	}
	input[cnt] = '\0';

	return;
}