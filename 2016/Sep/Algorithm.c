#include <stdio.h>

int main() {
	int money, remainMoney = 0;

	printf("돈을 입력하세요 : ");
	scanf("%d", &money);

	if (money >= 700) {
		remainMoney = money - 700;
		printf("잔돈은 %d원 입니다.", remainMoney);
	}
	else {
		printf("입력 금액은 700원에 부족합니다.\n");
	}
}