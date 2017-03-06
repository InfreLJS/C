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

	for (cnt = 0; cnt <= len; cnt++) {
		temp[cnt] = input[len - cnt];
	}
	temp[len + 1] = '\0';

	for (cnt = 0; cnt <= len; cnt++) {
		input[cnt] = temp[cnt];
	}
	input[len + 1] = '\0';

	return;
}