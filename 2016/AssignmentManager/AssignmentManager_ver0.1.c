#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>

#define MAIN_X 30
#define MAIN_Y 30

#define STATUS_X 3

#define TIME_Y 3
#define NOWSHOW_Y 4 
#define REMAIN_Y 5

typedef struct Assignment {
	int month, day;
	char *sub, *det;
} AS;

void reset();
void ferr(int *fp);
void gotoxy(int x, int y);

int main() {
	int a;
	FILE * fp = fopen("D:\\Dropbox\\DSM\\1╟╨│т\\C_Programming\\FILES\\Assignment.txt", "r+");
	ferr(fp);

	reset();

	fclose(fp);

	return 0;
}

void reset() {
	int i, j;

	system("mode con: cols=60 lines=31");

	for (i = 0; i < MAIN_X; i++) {
		gotoxy(i, 0);
		printf("бр");
		gotoxy(i, MAIN_Y - 1);
		printf("бс");
	}
	for (i = 0; i < MAIN_Y; i++) {
		gotoxy(0, i);
		printf("бр");
		gotoxy(MAIN_X - 1, i);
		printf("бс");
	}
}

void ferr(int *fp) {
	if (fp == NULL) {
		printf("File Open ERROR\n");
		exit(1);
	}
}

void gotoxy(int x, int y) {
	COORD Pos = { 2*x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}