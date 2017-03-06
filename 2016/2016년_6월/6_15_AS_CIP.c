//#include <stdio.h>
//
//int main() {
//	int A[10] = { 160,52,3,4,36,6,7,8,9,12 };
//	int cnt, sum = 0;
//
//	for (cnt = 0; cnt < 10; cnt++) {
//		if (A[cnt] > 0 && A[cnt] % 4 == 0) {
//			sum += A[cnt];
//			printf("A[cnt] : %d\n", A[cnt]);
//			printf("sum : %d\n", sum);
//		}
//	}
//}

//// 등비수열
//#include <stdio.h>
//
//int main() {
//	const r = 2;
//	int a = 1, sum = 0, i;
//
//	for (i = 1; i <= 10; i++, a *= r) {
//		sum += a;
//		printf("%d    %d\n", a, sum);
//	}
//}

//// 계차수열
//#include <stdio.h>
//#define FIN 50000
//
//int main() {
//	long long K, N = 1, H = 0;
//
//	for (K = 0; K < FIN; K++) {
//		N = N + K;
//		H = H + N;
//		printf("%3d    %3d    %3d\n", K + 1, N, H);
//	}
//	
//	return 0;
//}