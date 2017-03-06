#include <stdio.h>

int main() {
	unsigned char a;
	for(a = 0; a <= 126; a++) {
		printf("ASCII  =  %c   %d \n", a, a);
	}
	return 0;
}
