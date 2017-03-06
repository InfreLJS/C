#include <stdio.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int a = 0, b, c;
	int d = 1;
	
	while (1) {
		b = time(NULL);

		while (b) {
			d *= 50;
		}
		printf("%d\n", d);
	}
}