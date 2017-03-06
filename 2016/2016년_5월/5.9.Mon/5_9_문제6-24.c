//#include <stdio.h>
//
//int main() {
//	int n, a = 2;
//	printf("정수 입력 : ");
//	scanf("%d", &n);
//	printf("%d의 소인수 : ", n);
//
//	while (a <= n) {
//		if (n % a == 0) {
//			if (n == a) {
//				n /= a;
//				printf("%d", a);
//			}
//			else {
//				n /= a;
//				printf("%dx", a);
//			}
//		}
//		else
//			a++;
//	}
//	printf("\n");
//
//}