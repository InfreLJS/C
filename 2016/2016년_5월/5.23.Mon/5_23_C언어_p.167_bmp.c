#include <stdio.h>
#define WIDTH 1024
#define HEIGHT 768
#define HEADER 54

unsigned char R[HEIGHT][WIDTH], G[HEIGHT][WIDTH], b[HEIGHT][WIDTH];

int main() {
	FILE *fp1 = fopen("1024X768.bmp", "rb");
	FILE *fp2 = fopen("1024X768_2.bmp", "wb");

	int a, b;

	for (a = 0; a < HEADER; a++) {
		putc(getc(fp1), fp2);
	}
	for (a = 0; a < HEIGHT; a++) {
		for (b = 0; b < WIDTH; b++) {
			B[a][b] = getc(fp1);
			G[a][b] = getc(fp1);
			R[a][b] = getc(fp1);
		}
	}
	for (a = 0; a < HEIGHT; a++) {
		for (b = 0; b < WIDTH; b++) {
			putc(B[a][b], fp2);
			putc(G[a][b], fp2);
			putc(R[a][b], fp2);
		}
	}
	return 0;
}