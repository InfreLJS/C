#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define WORDNUM 60
#define WORDLEN 30
#define HINTKEY "#hint"
#define QUITKEY "#quit"

char VocaDic[WORDNUM][WORDLEN] = { 0 };

int FILEERR(FILE * in);
int Choose(int day);
void MakeVocaDic(FILE * in);
void Exam();
void Play();
void Correct(int a);
void BackToFir();
void End();

int main() {
	FILE * in;
	int day, cho = 0;

	srand((unsigned int)time(NULL));
	while (1) {
		printf("\n\n\n\n\n\t날짜 입력 : ");
		scanf("%d", &day);

		switch (day) {
		case 10:
			in = fopen("day10.txt", "r");
			if (FILEERR(in) == -1)
				return -1;
			MakeVocaDic(in);
			cho = Choose(day);
			if (cho == 1)
				break;
			else if (cho == -1)
				return -1;
			else
				End();
			return 0;

		case 11:
			in = fopen("day11.txt", "r");
			if (FILEERR(in) == -1)
				return -1;
			MakeVocaDic(in);
			cho = Choose(day);
			if (cho == 1)
				break;
			else if (cho == -1)
				return -1;
			else
				End();
			return 0;

		case 12:
			in = fopen("day12.txt", "r");
			if (FILEERR(in) == -1)
				return -1;
			MakeVocaDic(in);
			cho = Choose(day);
			if (cho == 1)
				break;
			else if (cho == -1)
				return -1;
			else
				End();
			return 0;

		case 13:
			in = fopen("day13.txt", "r");
			if (FILEERR(in) == -1)
				return -1;
			MakeVocaDic(in);
			cho = Choose(day);
			if (cho == 1)
				break;
			else if (cho == -1)
				return -1;
			else
				End();
			return 0;

		case 14:
			in = fopen("day14.txt", "r");
			if (FILEERR(in) == -1)
				return -1;
			MakeVocaDic(in);
			cho = Choose(day);
			if (cho == 1)
				break;
			else if (cho == -1)
				return -1;
			else
				End();
			return 0;

		case 15:
			in = fopen("day15.txt", "r");
			if (FILEERR(in) == -1)
				return -1;
			MakeVocaDic(in);
			cho = Choose(day);
			if (cho == 1)
				break;
			else if (cho == -1)
				return -1;
			else
				End();
			return 0;

		default:
			printf("\n\n\t해당 날짜에 해당하는 데이터가 없습니다.\n");
			return -1;
		}
	}

	End();
	return 0;
}


int FILEERR(FILE * in) {
	if (in == NULL) {
		printf("\n\n\t단어 리스트 파일이 없습니다.\n");
		return -1;
	}
}

int Choose(int day) {
	int cho;

	system("cls");
	printf("\n\t날짜 : DAY%d", day);
	printf("\n\n\n\n\t단어 보기 : 1\n");
	printf("\t단어 시험 : 2\n");
	printf("\t날짜 재선택 : 3\n");
	printf("\t입력  : ");
	scanf("%d", &cho);
	system("cls");

	if (cho == 1) {
		Play();
		return 1;
	}
	else if (cho == 2) {
		Exam();
		return 1;
	}
	else if (cho == 3)
		return 1;
	else {
		printf("\n\n\t잘못 입력하셨습니다.\n");
		return -1;
	}
}

void MakeVocaDic(FILE * in) {
	int a;

	for (a = 0; a < WORDNUM - 1; a += 2) {
		fscanf(in, "%s", &VocaDic[a]);
		fscanf(in, "%s", &VocaDic[a + 1]);
	}
}

void Exam() {
	int a, b, check[60] = { 0 };
	char ch[WORDLEN];
	char hint[WORDNUM] = { 0, };

	while (1) {
		do {
			a = rand() % 60;
		} while (a % 2 != 1 && check[a] == 0);

		while (1) {
			switch (hint[a]) {
			case 0:
				printf("\n\n\n\n\n\n\t\t%s\n\n        ===>  ", VocaDic[a]);
				scanf("%s", ch);
				break;
			case 1:
				printf("\n\n\n\n\n\t\t%s\n\n        ===>  ", VocaDic[a]);
				scanf("%s", ch);
				break;
			case 2:
				printf("\n\n\n\n\t\t%s\n\n        ===>  ", VocaDic[a]);
				scanf("%s", ch);
				break;
			case 3:
				printf("\n\n\n\t\t%s\n\n        ===>  ", VocaDic[a]);
				scanf("%s", ch);
				break;
			default:
				printf("\n\n\t\t%s\n\n        ===>  ", VocaDic[a]);
				scanf("%s", ch);
			}

			if (strcmp(ch, VocaDic[a + 1]) == 0) {
				Correct(check[a]);
				break;
			}
			else if (strcmp(ch, VocaDic[a - 1]) == 0) {
				Correct(check[a]);
				break;
			}
			else if (strcmp(ch, QUITKEY) == 0) {
				BackToFir();
				return 0;
			}
			else if (strcmp(ch, HINTKEY) == 0) {
				system("cls");
				switch (hint[a]) {
				case 0:
					hint[a]++;
					printf("\n\t첫 번째 글자 : %c", VocaDic[a - 1][0]);
					break;
				case 1:
					hint[a]++;
					printf("\n\t첫 번째 글자 : %c", VocaDic[a - 1][0]);
					printf("\n\t두 번째 글자 : %c", VocaDic[a - 1][1]);
					break;
				case 2:
					hint[a]++;
					printf("\n\t첫 번째 글자 : %c", VocaDic[a - 1][0]);
					printf("\n\t두 번째 글자 : %c", VocaDic[a - 1][1]);
					printf("\n\t세 번째 글자 : %c", VocaDic[a - 1][2]);
					break;
				case 3:
					hint[a]++;
					printf("\n\t첫 번째 글자 : %c", VocaDic[a - 1][0]);
					printf("\n\t두 번째 글자 : %c", VocaDic[a - 1][1]);
					printf("\n\t세 번째 글자 : %c", VocaDic[a - 1][2]);
					printf("\n\t모든 힌트 공개됨.");
					break;
				default:
					printf("\n\t첫 번째 글자 : %c", VocaDic[a - 1][0]);
					printf("\n\t두 번째 글자 : %c", VocaDic[a - 1][1]);
					printf("\n\t세 번째 글자 : %c", VocaDic[a - 1][2]);
					printf("\n\t모든 힌트 공개됨.");
				}
			}
			else {
				printf("\n\n\t오답입니다.\n");
				hint[a] = 0;
				Sleep(1000);
				system("cls");
			}
		}
	}
}

void Play() {
	int a;
	char b;

	for (a = 0; a < 60; a += 2) {
		printf("\n\n\n\t%s      ", VocaDic[a]);
		getch();
		printf("%s\n", VocaDic[a + 1]);
		b = getch();
		if (a % 5 == 4)
			system("cls");
		if (b != 32)
			return 0;
		if (a == 58)
			a = 0;
	}
}

void Correct(int a) {
	printf("\n\n\t정답입니다.\n");
	a = 1;
	Sleep(1000);
	system("cls");
}

void BackToFir() {
	printf("\n\n\t처음 화면으로 이동.\n");
	Sleep(1000);
	system("cls");
	return;
}

void End() {
	printf("프로그램을 종료합니다.\n");
	return;
}

//int Body(FILE * in) {
//	int day, cho = 0;
//
//	while (1) {
//		printf("\n\n\n\t날짜 입력 : ");
//		scanf("%d", &day);
//
//		switch (day) {
//		case 10:
//			in = fopen("day10.txt", "r");
//			if (FILEERR(in) == -1)
//				return -1;
//			MakeVocaDic(in);
//			cho = Choose(day);
//			if (cho == 1)
//				Play();
//			else if (cho == 2)
//				Exam();
//			else if (cho == 3)
//				break;
//			else {
//				printf("잘못 입력하셨습니다.\n");
//				return -1;
//			}
//			printf("프로그램을 종료합니다.\n");
//			return 0;
//
//		case 11:
//			in = fopen("day11.txt", "r");
//			if (FILEERR(in) == -1)
//				return -1;
//			MakeVocaDic(in);
//			cho = Choose(day);
//			if (cho == 1)
//				Play();
//			else if (cho == 2)
//				Exam();
//			else {
//				printf("잘못 입력하셨습니다.\n");
//				return -1;
//			}
//			printf("프로그램을 종료합니다.\n");
//			return 0;
//
//		case 12:
//			in = fopen("day12.txt", "r");
//			if (FILEERR(in) == -1)
//				return -1;
//			MakeVocaDic(in);
//			cho = Choose(day);
//			if (cho == 1)
//				Play();
//			else if (cho == 2)
//				Exam();
//			else {
//				printf("잘못 입력하셨습니다.\n");
//				return -1;
//			}
//			printf("프로그램을 종료합니다.\n");
//			return 0;
//
//		case 13:
//			in = fopen("day13.txt", "r");
//			if (FILEERR(in) == -1)
//				return -1;
//			MakeVocaDic(in);
//			cho = Choose(day);
//			if (cho == 1)
//				Play();
//			else if (cho == 2)
//				Exam();
//			else {
//				printf("잘못 입력하셨습니다.\n");
//				return -1;
//			}
//			printf("프로그램을 종료합니다.\n");
//			return 0;
//
//		case 14:
//			in = fopen("day14.txt", "r");
//			if (FILEERR(in) == -1)
//				return -1;
//			MakeVocaDic(in);
//			cho = Choose(day);
//			if (cho == 1)
//				Play();
//			else if (cho == 2)
//				Exam();
//			else {
//				printf("잘못 입력하셨습니다.\n");
//				return -1;
//			}
//			printf("프로그램을 종료합니다.\n");
//			return 0;
//
//		case 15:
//			in = fopen("day15.txt", "r");
//			if (FILEERR(in) == -1)
//				return -1;
//			MakeVocaDic(in);
//			cho = Choose(day);
//			if (cho == 1)
//				Play();
//			else if (cho == 2)
//				Exam();
//			else {
//				printf("잘못 입력하셨습니다.\n");
//				return -1;
//			}
//			printf("프로그램을 종료합니다.\n");
//			return 0;
//
//		default:
//			printf("해당 날짜에 해당하는 데이터가 없습니다.\n");
//			return -1;
//		}
//	}
//	printf("프로그램을 종료합니다.\n");
//	return 0;
//}