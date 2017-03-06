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
		printf("\n\n\n\n\n\t��¥ �Է� : ");
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
			printf("\n\n\t�ش� ��¥�� �ش��ϴ� �����Ͱ� �����ϴ�.\n");
			return -1;
		}
	}

	End();
	return 0;
}


int FILEERR(FILE * in) {
	if (in == NULL) {
		printf("\n\n\t�ܾ� ����Ʈ ������ �����ϴ�.\n");
		return -1;
	}
}

int Choose(int day) {
	int cho;

	system("cls");
	printf("\n\t��¥ : DAY%d", day);
	printf("\n\n\n\n\t�ܾ� ���� : 1\n");
	printf("\t�ܾ� ���� : 2\n");
	printf("\t��¥ �缱�� : 3\n");
	printf("\t�Է�  : ");
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
		printf("\n\n\t�߸� �Է��ϼ̽��ϴ�.\n");
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
					printf("\n\tù ��° ���� : %c", VocaDic[a - 1][0]);
					break;
				case 1:
					hint[a]++;
					printf("\n\tù ��° ���� : %c", VocaDic[a - 1][0]);
					printf("\n\t�� ��° ���� : %c", VocaDic[a - 1][1]);
					break;
				case 2:
					hint[a]++;
					printf("\n\tù ��° ���� : %c", VocaDic[a - 1][0]);
					printf("\n\t�� ��° ���� : %c", VocaDic[a - 1][1]);
					printf("\n\t�� ��° ���� : %c", VocaDic[a - 1][2]);
					break;
				case 3:
					hint[a]++;
					printf("\n\tù ��° ���� : %c", VocaDic[a - 1][0]);
					printf("\n\t�� ��° ���� : %c", VocaDic[a - 1][1]);
					printf("\n\t�� ��° ���� : %c", VocaDic[a - 1][2]);
					printf("\n\t��� ��Ʈ ������.");
					break;
				default:
					printf("\n\tù ��° ���� : %c", VocaDic[a - 1][0]);
					printf("\n\t�� ��° ���� : %c", VocaDic[a - 1][1]);
					printf("\n\t�� ��° ���� : %c", VocaDic[a - 1][2]);
					printf("\n\t��� ��Ʈ ������.");
				}
			}
			else {
				printf("\n\n\t�����Դϴ�.\n");
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
	printf("\n\n\t�����Դϴ�.\n");
	a = 1;
	Sleep(1000);
	system("cls");
}

void BackToFir() {
	printf("\n\n\tó�� ȭ������ �̵�.\n");
	Sleep(1000);
	system("cls");
	return;
}

void End() {
	printf("���α׷��� �����մϴ�.\n");
	return;
}

//int Body(FILE * in) {
//	int day, cho = 0;
//
//	while (1) {
//		printf("\n\n\n\t��¥ �Է� : ");
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
//				printf("�߸� �Է��ϼ̽��ϴ�.\n");
//				return -1;
//			}
//			printf("���α׷��� �����մϴ�.\n");
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
//				printf("�߸� �Է��ϼ̽��ϴ�.\n");
//				return -1;
//			}
//			printf("���α׷��� �����մϴ�.\n");
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
//				printf("�߸� �Է��ϼ̽��ϴ�.\n");
//				return -1;
//			}
//			printf("���α׷��� �����մϴ�.\n");
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
//				printf("�߸� �Է��ϼ̽��ϴ�.\n");
//				return -1;
//			}
//			printf("���α׷��� �����մϴ�.\n");
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
//				printf("�߸� �Է��ϼ̽��ϴ�.\n");
//				return -1;
//			}
//			printf("���α׷��� �����մϴ�.\n");
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
//				printf("�߸� �Է��ϼ̽��ϴ�.\n");
//				return -1;
//			}
//			printf("���α׷��� �����մϴ�.\n");
//			return 0;
//
//		default:
//			printf("�ش� ��¥�� �ش��ϴ� �����Ͱ� �����ϴ�.\n");
//			return -1;
//		}
//	}
//	printf("���α׷��� �����մϴ�.\n");
//	return 0;
//}