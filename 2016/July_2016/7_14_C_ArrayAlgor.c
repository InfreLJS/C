#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#define M 45

void fillArray(int a[][M]);
void sum1(int a[][M]);
void sum2(int a[][M]);
void sum3(int a[][M]);
void sum4(int a[][M]);
void gotoxy(int x, int y);

int main() {
	int a[M][M], x = 2, y = 1;

	srand((int)time(NULL));

	fillArray(a);
	sum1(a);
	sum2(a);
	sum3(a);
	sum4(a);
	return 0;
}

void gotoxy(int x, int y) {
	COORD Pos = { x * 2, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void fillArray(int a[][M]) {
	int r, c, sum = 0;

	for (r = 0; r < M; r++) {
		for (c = 0; c < M; c++) {
			a[r][c] = rand() % 100 + 1;
			sum += a[r][c];
			printf("%4d", a[r][c]);
		}
		printf("\n");
	}
	printf("\n\tsum = %d\n\n", sum);
	Sleep(500);
}

void sum1(int a[][M]) {
	int r, c, sum1 = 0;

	for (r = 0; r < M; r++) {
		for (c = 0; c < M; c++) {
			if (r == c) {
				sum1 += a[r][c];
				printf("%4d", a[r][c]);
			}
			else
				printf("    ");
		}
		printf("\n");
	}

	printf("\n\tsum1 = %d\n\n", sum1);
	Sleep(500);
}

void sum2(int a[][M]) {
	int r, c, sum2 = 0;

	for (r = 0; r < M; r++) {
		for (c = 0; c < M; c++) {
			if (c <= r) {
				sum2 += a[r][c];
				printf("%4d", a[r][c]);
			}
			else
				printf("    ");
		}
		printf("\n");
	}

	printf("\n\tsum2 = %d\n\n", sum2);
	Sleep(500);
}

void sum3(int a[][M]) {
	int r, c, sum3 = 0;

	for (r = 0; r < M; r++) {
		for (c = 0; c < M - 1 - r; c++) {
			printf("    ");
		}
		for (c = M - 1 - r; c <= M - 1; c++) {
			sum3 += a[r][c];
			printf("%4d", a[r][c]);
		}
		printf("\n");
	}

	printf("\n\tsum3 = %d\n\n", sum3);
	Sleep(500);
}

void sum4(int a[][M]) {
	int r, c, sum4 = 0;

	for (c = 0; c < M; c++) {
		for (r = 0; r < M - 1 - c; r++) {
			printf("    ");
		}
		for (r = M - 1 - c; r <= M - 1; r++) {
			sum4 += a[r][c];
			printf("%4d", a[c][r]);
		}
		printf("\n");
	}

	printf("\n\tsum4 = %d\n\n", sum4);
	Sleep(500);
}