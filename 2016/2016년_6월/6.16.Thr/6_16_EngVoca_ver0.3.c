#include "EngVoca.h"

int FILEERR(FILE * in);
int Choose(int day, char VocaDic[][WORDLEN]);
void MakeVocaDic(FILE * in, char VocaDic[][WORDLEN]);
void Exam(char VocaDic[][WORDLEN]);
void ShowAll(char VocaDic[][WORDLEN]);
void Play(char VocaDic[][WORDLEN]);
void Correct(int a);
void BackToFir();
void End();

int main() {
	FILE * in;
	int day, cho = 0;
	char VocaDic[WORDNUM][WORDLEN] = { 0 };

	srand((unsigned int)time(NULL));

	while (1) {
		system("cls");
		printf("\n\n\n\n\t\t(종료하려면 0 입력)");
		printf("\n\t\t날짜 입력 : ");
		scanf("%d", &day);

		switch (day) {
		case 0:
			End();
			return 0;
		case 10:
			in = fopen("D:\\Dropbox\\DSM\\1학년\\C_Programming\\FILES\\day10.txt", "r");
			break;
		case 11:
			in = fopen("D:\\Dropbox\\DSM\\1학년\\C_Programming\\FILES\\day11.txt", "r");
			break;
		case 12:
			in = fopen("D:\\Dropbox\\DSM\\1학년\\C_Programming\\FILES\\day12.txt", "r");
			break;
		case 13:
			in = fopen("D:\\Dropbox\\DSM\\1학년\\C_Programming\\FILES\\day13.txt", "r");
			break;
		case 14:
			in = fopen("D:\\Dropbox\\DSM\\1학년\\C_Programming\\FILES\\day14.txt", "r");
			break;
		case 15:
			in = fopen("D:\\Dropbox\\DSM\\1학년\\C_Programming\\FILES\\day15.txt", "r");
			break;
		default:
			printf("\n\n\t\t해당 날짜에 해당하는 데이터가 없습니다.\n");
			BackToFir();
			continue;
		}

		if (FILEERR(in) == -1) {
			BackToFir();
			continue;
		}

		MakeVocaDic(in, VocaDic);
		cho = Choose(day, VocaDic);

		if (cho == 1) {
			BackToFir();
			continue;
		}
		else if (cho == -1) {
			End();
			return -1;
		}
		else {
			printf("ERROR\n");
			return -1;
		}
	}

	return 0;
}

int FILEERR(FILE * in) {
	if (in == NULL) {
		printf("\n\n\t\t단어 리스트 파일이 없습니다.\n");
		return -1;
	}
}

int Choose(int day, char VocaDic[][WORDLEN]) {
	int cho;

	while (1) {
		system("cls");
		printf("\n\t\t날짜 : DAY%d", day);
		printf("\n\n\n\n\t\t단어 보기 : 1\n");
		printf("\t\t단어 시험 : 2\n");
		printf("\t\t날짜 재선택 : 3\n");
		printf("\t\t종료 : 0\n");
		printf("\t\t입력  : ");
		scanf("%d", &cho);

		if (cho == 1) {
			Play(VocaDic);
			return 1;
		}
		else if (cho == 2) {
			Exam(VocaDic);
			return 1;
		}
		else if (cho == 3) {
			return 1;
		}
		else if (cho == 0) {
			return -1;
		}
		else {
			printf("\n\n\t\t잘못 입력하셨습니다.\n");
			return -1;
		}
	}
}

void MakeVocaDic(FILE * in, char VocaDic[][WORDLEN]) {
	int a;

	for (a = 0; a < WORDNUM - 1; a += 2) {
		fscanf(in, "%s", &VocaDic[a]);
		fscanf(in, "%s", &VocaDic[a + 1]);
	}
}

void ShowAll(char VocaDic[][WORDLEN]) {
	int cnt;

	printf("\n\n\n");
	for (cnt = 0; cnt < WORDNUM / 2; cnt+=2) {
		printf("%s          %s\n\n", VocaDic[cnt], VocaDic[cnt + 1]);
	}
	getch();

	for (cnt = WORDNUM / 2; cnt < WORDNUM; cnt+=2) {
		printf("%s          %s\n\n", VocaDic[cnt], VocaDic[cnt + 1]);
	}
	getch();

	return 0;
}

void Exam(char VocaDic[][WORDLEN]) {
	int a, b, check[60] = { 0 };
	char ch[WORDLEN];
	char hint[WORDNUM] = { 0, };

	while (1) {
		do {
			a = rand() % 60;
		} while (a % 2 != 1 && check[a] == 0);

		system("cls");
		while (1) {
			printf("\n\n\t\t#pass : 이 단어 패스\n");
			printf("\t\t#show : 단어 모두 보여주고 패스\n");
			printf("\t\t#hint : 힌트(최대 3글자)\n");
			printf("\t\t#quit : 처음 화면으로 이동\n");

			switch (hint[a]) {
			case 0:
				printf("\n\n\n\n\n\t\t\t%s\n\n\t\t===> ", VocaDic[a]);
				scanf("%s", ch);
				break;
			case 1:
				printf("\n\n\n\n\t\t\t%s\n\n\t\t===>  ", VocaDic[a]);
				scanf("%s", ch);
				break;
			case 2:
				printf("\n\n\n\t\t\t%s\n\n\t\t===>  ", VocaDic[a]);
				scanf("%s", ch);
				break;
			case 3:
				printf("\n\n\t\t\t%s\n\n\t\t===>  ", VocaDic[a]);
				scanf("%s", ch);
				break;
			default:
				printf("\n\t\t\t%s\n\n\t\t===>  ", VocaDic[a]);
				scanf("%s", ch);
			}

			strcpy(ch, tolower(ch));

			if (strcmp(ch, VocaDic[a + 1]) == 0) {
				Correct(check[a]);
				break;
			}
			else if (strcmp(ch, VocaDic[a - 1]) == 0) {
				Correct(check[a]);
				break;
			}
			else if (strcmp(ch, QUITKEY) == 0) {
				return 0;
			}
			else if (strcmp(ch, SHOWKEY) == 0) {
				ShowAll(VocaDic);
				break;
			}
			else if (strcmp(ch, PASSKEY) == 0) {
				printf("\n\n\t\t패스합니다.\n");
				Sleep(1000);
				break;
			}
			else if (strcmp(ch, HINTKEY) == 0) {
				system("cls");
				switch (hint[a]) {
				case 0:
					hint[a]++;
					printf("\n\t\t첫 번째 글자 : %c", VocaDic[a - 1][0]);
					break;
				case 1:
					hint[a]++;
					printf("\n\t\t첫 번째 글자 : %c", VocaDic[a - 1][0]);
					printf("\n\t\t두 번째 글자 : %c", VocaDic[a - 1][1]);
					break;
				case 2:
					hint[a]++;
					printf("\n\t\t첫 번째 글자 : %c", VocaDic[a - 1][0]);
					printf("\n\t\t두 번째 글자 : %c", VocaDic[a - 1][1]);
					printf("\n\t\t세 번째 글자 : %c", VocaDic[a - 1][2]);
					break;
				case 3:
					hint[a]++;
					printf("\n\t\t첫 번째 글자 : %c", VocaDic[a - 1][0]);
					printf("\n\t\t두 번째 글자 : %c", VocaDic[a - 1][1]);
					printf("\n\t\t세 번째 글자 : %c", VocaDic[a - 1][2]);
					printf("\n\t\t모든 힌트 공개됨.");
					break;
				default:
					printf("\n\t\t첫 번째 글자 : %c", VocaDic[a - 1][0]);
					printf("\n\t\t두 번째 글자 : %c", VocaDic[a - 1][1]);
					printf("\n\t\t세 번째 글자 : %c", VocaDic[a - 1][2]);
					printf("\n\t\t모든 힌트 공개됨.");
				}
			}
			else {
				printf("\n\n\t\t오답입니다.\n");
				hint[a] = 0;
				Sleep(1000);
				system("cls");
			}
		}
	}
}

void Play(char VocaDic[][WORDLEN]) {
	int a;
	char b;

	system("cls");
	printf("\n\n\n\t\tESC 누르면 끝납니다.\n");
	printf("\t\t시작하려면 아무 키나 누르세요.\n");
	getch();

	for (a = 0; a < WORDNUM; a += 2) {
		printf("\n\n\n\t\t%s      ", VocaDic[a]);
		b = getch();
		if (b == ESC) {
			BackToFir();
			return 0;
		}
		printf("%s\n", VocaDic[a + 1]);
		b = getch();
		if (a % 5 == 4)
			system("cls");
		if (b == 27) {
			BackToFir();
			return 0;
		}
		if (a == WORDNUM - 2)
			a = 0;
	}
}

void Correct(int a) {
	printf("\n\n\t\t정답입니다.\n");
	a = 1;
	Sleep(1000);
	system("cls");
}

void BackToFir() {
	printf("\n\n\t\t처음 화면으로 이동.\n");
	Sleep(1000);
	system("cls");
	return;
}

void End() {
	printf("\n\n\t\t프로그램을 종료합니다.\n\n");
	return;
}