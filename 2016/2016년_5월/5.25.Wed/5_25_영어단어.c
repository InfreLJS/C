#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#define WORDNUM 60
#define WORDLEN 30

int main() {
	FILE * day10 = fopen("day10.txt", "r");
	FILE * day11 = fopen("day11.txt", "r");
	FILE * day12 = fopen("day12.txt", "r");
	char acWord[WORDNUM][WORDLEN] = { 0 };
	int cho, iC;

	if (day10 == NULL) {
		printf("단어 리스트 파일이 없습니다.\n");
		return -1;
	}

	printf("\n\n\n\t단어 보기 : 1\n");
	printf("\t단어 시험 : 2\n");
	printf("\t입력  : ");
	scanf("%d", &cho);
	system("cls");

	if (cho == 1) {
		printf("\n\n\n\tDay 10 : 1\n");
		printf("\tDay 11 : 2\n");
		printf("\tDay 12 : 3\n");
		printf("\t입력  : ");
		scanf("%d", &cho);
		system("cls");

		if (cho == 1) {
			for (iC = 0; iC < WORDNUM - 1; iC = iC + 2) {
				fscanf(day10, "%s", &acWord[iC]);
				fscanf(day10, "%s", &acWord[iC + 1]);
				printf("\n\n\n\t%s\t%s\n\n\n", acWord[iC], acWord[iC + 1]);
				printf("\t다음 단어를 보려면 아무 키나 누르세요.\n");
				getch();
				system("cls");
				if (iC == 58)
					iC = -2;
			}
		}
		else if (cho == 2) {
			for (iC = 0; iC < WORDNUM - 1; iC = iC + 2) {
				fscanf(day11, "%s", &acWord[iC]);
				fscanf(day11, "%s", &acWord[iC + 1]);
				printf("\n\n\n\t%s\t%s\n\n\n", acWord[iC], acWord[iC + 1]);
				printf("\t다음 단어를 보려면 아무 키나 누르세요.\n");
				getch();
				system("cls");
				if (iC == 58)
					iC = -2;
			}
		}
		else if (cho == 3) {
			for (iC = 0; iC < WORDNUM - 1; iC = iC + 2) {
				fscanf(day12, "%s", &acWord[iC]);
				fscanf(day12, "%s", &acWord[iC + 1]);
				printf("\n\n\n\t%s\t%s\n\n\n", acWord[iC], acWord[iC + 1]);
				printf("\t다음 단어를 보려면 아무 키나 누르세요.\n");
				getch();
				system("cls");
				if (iC == 58)
					iC = -2;
			}
		}
	}
}