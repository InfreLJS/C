//#include <stdio.h>
//#define STR "I Love Do You"
//#define MAX 20
//
//int main() {
//	int a, b = 0, len = 0, top = 0;
//	char str_a[] = STR, str_b[] = STR;
//	
//	for (a = 0; str_a[a] != '\0'; a++) len++;
//
//	for (a = len - 1; a >= 0; a--, b++) {
//		str_b[b] = str_a[a];
//	}
//
//	printf("원래 문장 : %s\n바뀐 문장 : %s\n", str_a, str_b);
//	
//	return 0;
//}

#include <stdio.h>
#define STR "I Love Do You"
#define MAX 20

int main() {
	int a, b = 0, len = 0, top = 0;
	char str_a[] = STR, str_b[] = STR, stack[MAX];

	for (a = 0; str_a[a] != '\0'; a++) len++;

	for (a = len - 1; a >= 0; a--) {
		if (str_a[a] == ' ') {
			while (top)
				str_b[b++] = stack[--top];
			if (a != 0)
				str_b[b++] = ' ';
		}
		else {
			stack[top++] = str_a[a];
			if (a == 0) {
				while (top)
					str_b[b++] = stack[--top];
			}
		}
	}

	printf("원래 문장 : %s\n바뀐 문장 : %s\n", str_a, str_b);

	return 0;
}