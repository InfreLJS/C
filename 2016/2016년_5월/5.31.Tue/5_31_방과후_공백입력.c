#include <stdio.h>

int main() {
	int a = 0;
	char name[20];

	printf("�Է� : ");
	gets_s(name, sizeof(name));
	printf("%s\n", name);
	return 0;
}