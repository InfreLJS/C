#include "EngVoca.h"

int main() {
	FILE * in;
	int day, cho = 0;
	char VocaDic[WORDNUM][WORDLEN] = { 0 };
	srand((unsigned int)time(NULL));
	system("mode con: cols=100 lines=25");

	while (1) {
		system("cls");
		printf("\n\n\n\n\n\n\n\t\t\t\t\t(종료하려면 0 입력)");
		printf("\n\t\t\t\t\t날짜 입력 : ");
		scanf("%d", &day);

		if (Fileopen(in, day) == 1) {
			continue;
		}

		if (FILEERR(in) == -1) {
			BackToFir();
			continue;
		}

		MakeVocaDic(in, VocaDic);
		cho = Choose(day, VocaDic);

		if (cho == 0) {
			continue;
		}
		else {
			printf("ERROR\n");
			return -1;
		}
	}

	return 0;
}