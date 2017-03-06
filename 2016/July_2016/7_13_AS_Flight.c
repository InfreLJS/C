#include <stdio.h>

int main() {
	FILE *fp = fopen("D:\\Dropbox\\DSM\\1�г�\\C_Programming\\FILES\\Flight.txt", "r");
	int i, j, v;
	int wa[7] = { 0 }, wd[7] = { 0 }, ld[7] = { 0 };
	char ws[7][7] = { "������","ȭ����","������","�����","�ݿ���","�����","�Ͽ���" };

	if (fp == NULL) {
		printf("FILE OPEN ERROR\n");
		return -1;
	}

	for (i = 0; i < 7; i++) {
		fscanf(fp, "%d", &wa[i]);
		fscanf(fp, "%d", &ld[i]);
		if (wa[i] != 0) {
			v = (i + ld[i]) % 7;
			wd[v] += wa[i];
		}
	}

	for (i = 0; i < 7; i++) {
		j = wd[i];
		if (j == 0)
			continue;
		else if (j == 1)
			printf("%s : 1 flight  depart\n", ws[i]);
		else
			printf("%s : %d flights depart\n", ws[i], j);
	}

	return 0;
}