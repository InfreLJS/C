#include <stdio.h>
#include <string.h>

int main() {
	int a;

	struct human {
		int age;
		char name[20];
		char number[20];
	};

	struct human man[5];

	for (a = 0; a < 5; a++) {
		man[a].age = 17;
		strcpy(man[a].name, "Lee Jaeseok");
		strcpy(man[a].number, "010-9487-0392");
	}

	for (a = 0; a < 5; a++) {
		printf("���� : %d\n", man[a].age);
		printf("�̸� : %s\n", man[a].name);
		printf("��ȣ : %s\n", man[a].number);
		printf("\n");
	}

	return 0;
}