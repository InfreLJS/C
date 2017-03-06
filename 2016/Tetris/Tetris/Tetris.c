//#include <stdio.h>
//#include <stdlib.h>
//#include <conio.h>
//#include <time.h>
//#include <Windows.h>
//
//#define LEFT 75
//#define RIGHT 77
//#define UP 72
//#define DOWN 80
//#define SPACE 32
//
//#define ACTIVE -2
//#define CELLING -1
//#define EMPTY 0
//#define WALL 1
//#define INACTIVE 2
//
//#define MAIN_X 11
//#define MAIN_Y 23
//#define MAIN_ADJ_X 3
//#define MAIN_ADJ_Y 1
//
//#define STATUS_X_ADJ MAIN_X + MAIN_ADJ_X + 1
//
//int STATUS_Y_GOAL;
//int STATUS_Y_LEVEL;
//int STATUS_Y_SCORE;
//
//int blocks[7][4][4][4] = {
//	{ { 0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0 },{ 0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0 },
//	{ 0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0 },{ 0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0 } },
//	{ { 0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0 },{ 0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0 },
//	{ 0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0 },{ 0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0 } },
//	{ { 0,0,0,0,1,1,0,0,0,1,1,0,0,0,0,0 },{ 0,0,0,0,0,0,1,0,0,1,1,0,0,1,0,0 },
//	{ 0,0,0,0,1,1,0,0,0,1,1,0,0,0,0,0 },{ 0,0,0,0,0,0,1,0,0,1,1,0,0,1,0,0 } },
//	{ { 0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0 },{ 0,0,0,0,1,0,0,0,1,1,0,0,0,1,0,0 },
//	{ 0,0,0,0,0,1,1,0,1,1,0,0,0,0,0,0 },{ 0,0,0,0,1,0,0,0,1,1,0,0,0,1,0,0 } },
//	{ { 0,0,0,0,0,0,1,0,1,1,1,0,0,0,0,0 },{ 0,0,0,0,1,1,1,0,1,1,1,0,0,0,0,0 },
//	{ 0,0,0,0,0,0,1,0,1,1,1,0,0,0,0,0 },{ 0,0,0,0,0,0,1,0,1,1,1,0,0,0,0,0 } },
//	{ { 0,0,0,0,1,0,0,0,1,1,1,0,0,0,0,0 },{ 0,0,0,0,1,0,0,0,1,1,1,0,0,0,0,0 },
//	{ 0,0,0,0,1,0,0,0,1,1,1,0,0,0,0,0 },{ 0,0,0,0,1,0,0,0,1,1,1,0,0,0,0,0 } },
//	{ { 0,0,0,0,0,1,0,0,1,1,1,0,0,0,0,0 },{ 0,0,0,0,0,1,0,0,1,1,1,0,0,0,0,0 },
//	{ 0,0,0,0,0,1,0,0,1,1,1,0,0,0,0,0 },{ 0,0,0,0,0,1,0,0,1,1,1,0,0,0,0,0 } }
//};
//
//typedef enum { NOCURSOR, SOLIDCURSOR, NORMALCURSOR } CURSOR_TYPE;
//void gotoxy(int x, int y);
//void ChangePos();
//void setcursortype(CURSOR_TYPE c);
//void DownB();
//void PrintB();
//
//int x = 35, y = 0, speed = 400;
//
//int main() {
//	int i = 0;
//	setcursortype(NOCURSOR);
//	while (1) {
//		gotoxy(x, y);
//		ChangePos();
//		PrintB();
//		DownB();
//	}
//	return 0;
//}
//
//void setcursortype(CURSOR_TYPE c) {
//	CONSOLE_CURSOR_INFO CurInfo;
//	switch (c) {
//	case NOCURSOR:
//		CurInfo.dwSize = 1;
//		CurInfo.bVisible = FALSE;
//		break;
//	case SOLIDCURSOR:
//		CurInfo.dwSize = 100;
//		CurInfo.bVisible = TRUE;
//		break;
//	case NORMALCURSOR:
//		CurInfo.dwSize = 20;
//		CurInfo.bVisible = TRUE;
//		break;
//	}
//	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &CurInfo);
//}
//
//void gotoxy(int x, int y) {
//	COORD Pos;
//	Pos.X = x;
//	Pos.Y = y;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
//}
//
//void ChangePos() {
//	int ch = getch();
//
//	switch (ch) {
//	case UP:
//		if (y > 1)
//			y--;
//		break;
//	case DOWN:
//		if (y < 24)
//			y++;
//		break;
//	case LEFT:
//		if (x > 1)
//			x--;
//		break;
//	case RIGHT:
//		if (x < 79)
//			x++;
//		break;
//	}
//}
//
//void DownB() {
//	y++;
//	speed += 0;
//	Sleep(speed);
//	system("cls");
//}
//
//void PrintB() {
//	gotoxy(x, y);
//	printf("¡Ü¡Ü¡Ü");
//	gotoxy(x, y + 1);
//	printf("¡Ü");
//	gotoxy(x, y + 2);
//	printf("¡Ü");
//}