#include <stdio.h>

int main() {
	struct Student {
		int st_num;
		char Name[10];
		int Class;
	};
	struct Student Std1;
	Std1.st_num = 1;
	gets_s(Std1.Name, sizeof(Std1.Name));
	Std1.Class = 10;
	printf("��ȣ�� %d�� �Դϴ�.\n", Std1.st_num);
	printf("�̸��� %s �Դϴ�.\n", Std1.Name);
	printf("���� %d�� �Դϴ�.\n", Std1.Class);
}