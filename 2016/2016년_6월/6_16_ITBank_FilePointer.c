#include <stdio.h>

int main() {
	FILE * in = fopen("D:\\Dropbox\\DSM\\1�г�\\C_Programming\\FILES\\input2.txt", "r");
	int data = 0;

	while (feof(in) == 0) {
		fscanf(in, "%d", &data);
		printf("%d\n\n", data);
	}

	fclose(in);

	return 0;
}