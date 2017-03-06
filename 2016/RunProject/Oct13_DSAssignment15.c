#include <stdio.h>

int main() {
	int jumsu;

	printf("점수 입력 : ");
	scanf("%d", &jumsu);

	if (jumsu >= 90) {
		printf("우수\n");
	}
	else if (jumsu >= 70) {
		printf("보통\n");
	}
	else {
		printf("노력");
	}
}