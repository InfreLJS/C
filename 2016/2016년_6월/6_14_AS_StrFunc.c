#include <stdio.h>
#define STR_MAX 100

int strLen(char * str);
int strCpy(char * dest, char * source);
int strCat(char * dest, char * source);

int main() {
	char str[STR_MAX] = "Good Morning!";
	char dest[STR_MAX] = { 0 };


	printf("strLen : %d\n", strLen(str));
	printf("strCpy : %d\n", strCpy(dest, str));
	printf("dest : %s\n", dest);
	printf("str : %s\n", str);
	printf("strCat : %d\n", strCat(dest, str));
	printf("dest : %s\n", dest);
	printf("str : %s\n", str);
	printf("strCat : %d\n", strCmp(dest, str));
	printf("strCat : %d\n", strCmp(str, dest));
	printf("dest : %s\n", dest);
	printf("str : %s\n", str);

	return 0;
}

int strLen(char * str) {
	int len = 0;

	while (*(str + len) != 0) {
		len++;
	}

	return len;
}

int strCpy(char * dest, char * source) {
	int len = strLen(source) + 1, cnt;

	for (cnt = 0; cnt < len; cnt++) {
		*(dest + cnt) = *(source + cnt);
	}

	return len - 1;
}

int strCat(char * dest, char * source) {
	int dlen = strLen(dest), slen = strLen(source) + 1, cnt;

	for (cnt = 0; cnt < slen; cnt++) {
		*(dest + dlen + cnt) = *(source + cnt);
	}

	return (dlen + (slen - 1));
}

int strCmp(char * str1, char * str2) {
	int slen1 = strLen(str1) + 1, slen2 = strLen(str2) + 1, cnt;

	if (slen1 > slen2)
		slen1 = slen2;

	for (cnt = 0; cnt < slen1; cnt++) {
		if (*(str1 + cnt) > *(str2 + cnt)) {
			return 1;
		}
		else if (*(str1 + cnt) < *(str2 + cnt)) {
			return -1;
		}
	}

	return 0;
}