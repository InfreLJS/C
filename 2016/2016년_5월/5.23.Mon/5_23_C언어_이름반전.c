#include <stdio.h>

int main() {
	char name[20];
	int len = 0;

	scanf("%s", &name);
	printf("%s\n", name);

	len = sizeof(name);
	printf("%d\n", len);

	while (len >= 0) {
		printf("%c\n", name[--len]);
	}
	len = 0;
	while (name[len++] != '\0');
	while (len >= 0) {
		printf("%c", name[--len]);
	}
}