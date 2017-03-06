#include <stdio.h>
#include <stdlib.h>

int main() {
	char in[30] = { 0 };
	char out[30] = { 0 };
	int a = 0, b, c = 0;
	
	printf("문장 입력 : ");
	while (in[a] != '\n') {
		in[a] = getchar();
		a++;
	}

	for (b = a - 1; b >= 0; b--) {
		for (a = )
			out[c] = in[b];
			c++;
	}
	return 0;
}