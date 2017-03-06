//#include <stdio.h>
//
//int main() {
//	int cnt = 0, n, a;
//	char bin[32];
//
//	printf("2진수로 표현할 정수 입력 : ");
//	scanf(" %d", &n);
//
//	printf("%d를 2진수로 표현하면 ", n);
//
//	while (n != 0) {
//		bin[cnt] = n % 2;
//		n = n / 2;
//		cnt++;
//	}
//	for (a = cnt-1; a >= 0; a--) {
//		printf("%1d", bin[a]);
//	}
//
//	printf(" 입니다.\n");
//	return 0;
//}