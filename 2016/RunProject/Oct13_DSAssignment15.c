#include <stdio.h>

int main() {
	int jumsu;

	printf("���� �Է� : ");
	scanf("%d", &jumsu);

	if (jumsu >= 90) {
		printf("���\n");
	}
	else if (jumsu >= 70) {
		printf("����\n");
	}
	else {
		printf("���");
	}
}