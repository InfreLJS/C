// �����Լ� ������׷���

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int a, b, jum[10];

	srand((unsigned int)time(NULL));

	for (a = 0; a < 10; a++) {
		jum[a] = ((rand() % 100) + 1);
	}

	for (a = 0; a < 10; a++) {
		printf("%3d : ", jum[a]);
		for (b = 1; b <= (jum[a] / 10); b++) {
			printf("*");
		}
		printf("\n");
	}
}


// �����Ϳ� �迭

#include <stdio.h>

int sum(int* a, int s);

int main() {
	int cnt;
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("sum = %d\n", sum(a, sizeof(a) / sizeof(int)));
	for (cnt = 0; cnt < 10; cnt++) {
		printf("%5d", a[cnt]);
	}
	printf("\n");
}

int sum(int* a, int s) {
	int c, sum = 0;

	for (c = 0; c < s; c++) {
		sum += a[c];
	}
	for (c = 0; c < s; c++) {
		a[c] += 100;
	}
	return sum;
}


// ��ȣ ó�� p.129 - 1�� ���

#include <stdio.h>
#include <string.h>

int main() {
	char pw[20];
	int a;

	printf("��ȣ �Է� : ");
	scanf(" %s", &pw);

	for (a = 0; a < strlen(pw); a++) {
		pw[a] += 2;
	}

	printf("��ȣ : ");
	for (a = 0; a < strlen(pw); a++) {
		printf("%c", pw[a]);
	}
	printf("\n");
	return 0;
}


// ��ȣ ó�� p.129 - 2�� ���

#include <stdio.h>
#include <string.h>

int main() {
	char pw[20];
	int a;

	printf("��ȣ �Է� : ");
	scanf(" %s", &pw);

	for (a = 0; a < strlen(pw); a++) {
		pw[a] = (pw[a] * 7) % 80 + 48;
	}

	printf("��ȣ : ");
	for (a = 0; a < strlen(pw); a++) {
		printf("%c", pw[a]);
	}
	printf("\n");
	return 0;
}