// 함수 사용

#include <stdio.h>

int value[5][5];

int f(int a, int b) {
	int sum = 0, i, j;
	for (i = a; i < a + 3; i++) {
		for (j = b; j < b + 3; j++) {
			sum += value[i][j];
		}
	}
	return sum;
}

int main() {
	int i, j, max = 0;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			scanf(" %d", &value[i][j]);
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (max < f(i, j)) {
				max = f(i, j);
			}
		}
	}

	printf("%d\n", max);
	return 0;
}


// 함수 미사용

//#include <stdio.h>
//
//int main() {
//	int ore[5][5];
//	int c1, c2, c3, c4, sum = 0, max = 0;
//
//	for (c1 = 0; c1 < 5; c1++) {
//		for (c2 = 0; c2 < 5; c2++) {
//			scanf(" %d", &ore[c1][c2]);
//		}
//	}
//
//	for (c1 = 0; c1 < 3; c1++) {
//		for (c2 = 0; c2 < 3; c2++) {
//			sum = 0;
//			for (c3 = c1; c3 < c1 + 3; c3++) {
//				for (c4 = c2; c4 < c2 + 3; c4++) {
//					sum += ore[c3][c4];
//				}
//			}
//			if (sum > max) {
//				max = sum;
//			}
//		}
//	}
//
//	printf("%d\n", max);
//	return 0;
//}