#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#define M 45

void fillArray(int a[][M], int num);

int main() {
	int a[M][M], x = 2, y = 1, num;

	srand((int)time(NULL));

	printf("확률 구할 숫자 입력 : ");
	scanf("%d", &num);

	fillArray(a, num);
	return 0;
}

void fillArray(int a[][M], int num) {
	int r, c, sum = 0, per = 0;

	for (r = 0; r < M; r++) {
		for (c = 0; c < M; c++) {
			a[r][c] = rand() % 100 + 1;
			sum += a[r][c];
			if (a[r][c] == num) {
				per++;
			}
			printf("%4d", a[r][c]);
		}
		printf("\n");
	}
	printf("\n\tsum = %d\n\t%f probability\n", sum, (float)per / M*M);
	Sleep(500);
}