#include <stdio.h>

int main() {
	int money, remainMoney = 0;

	printf("���� �Է��ϼ��� : ");
	scanf("%d", &money);

	if (money >= 700) {
		remainMoney = money - 700;
		printf("�ܵ��� %d�� �Դϴ�.", remainMoney);
	}
	else {
		printf("�Է� �ݾ��� 700���� �����մϴ�.\n");
	}
}