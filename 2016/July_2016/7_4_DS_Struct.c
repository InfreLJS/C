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
	printf("번호는 %d번 입니다.\n", Std1.st_num);
	printf("이름은 %s 입니다.\n", Std1.Name);
	printf("반은 %d반 입니다.\n", Std1.Class);
}