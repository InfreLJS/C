#include <stdio.h>

int main() {
	char ch;
	int in;
	double dou;
	char str[10];

	printf("ют╥б : ");
	scanf("%c, %d, %lf, %s", &ch, &in, &dou, str);
	
	printf("%c, %d, %lf, %s\n", ch, in, dou, str);
	return 0;
}