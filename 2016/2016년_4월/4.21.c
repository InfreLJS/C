//// 4�� ���� 3�� ���� �Է¹޾� ����, ��� ���ϱ�
//#include <stdio.h>
//
//int main() {
//	int a[4], b[4], c[4], max[3] = { 0 },cnt1, cnt2, cnt3, cnt4;
//	float avg[3];
//	for (cnt1 = 0; cnt1 < 4; cnt1++) {
//		printf("%d��° ��� ���� �Է�(�ڷᱸ������ ��ǻ�ͱ������� c���α׷�������) : ", (cnt1+1));
//		scanf("%d %d %d", &a[cnt1], &b[cnt1], &c[cnt1]);
//	}
//	for (cnt3 = 0; cnt3 < 4; cnt3++) {
//		max[0] += a[cnt3];
//		max[1] += b[cnt3];
//		max[2] += c[cnt3];
//	}
//	for (cnt4 = 0; cnt4 < 3; cnt4++) {
//		avg[cnt4] = (float)max[cnt4] / 4.0;
//	}
//	printf("\t�ڷᱸ��\t��ǻ�ͱ���\tc���α׷���\n");
//	printf("���� :\t%4d\t\t %4d\t\t  %4d\n", max[0], max[1], max[2]);
//	printf("��� :\t%.2f\t\t  %.2f\t\t%.2f\n", avg[0], avg[1], avg[2]);
//	return 0;
//}

//// ������ ���
//#include <stdio.h>
//
//int main() {
//	int a, b, c, d, gu[9][9];
//	for (a = 0; a <= 8; a++) {
//		for (b = 0; b <= 8; b++) {
//			gu[a][b] = (a+1)*(b+1);
//		}
//	}
//	for (c = 0; c <= 8; c++) {
//		for (d = 0; d <= 8; d++) {
//			printf("%2d ", gu[c][d]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//// 2���� �迭 ��, ��
//#include <stdio.h>
//
//void sum(int a[3][3], int b[3][3]);
//void mul(int a[3][3], int b[3][3]);
//
//int main() {
//	int a[3][3], b[3][3], cnt1, cnt2, cnt3, cnt4;
//
//	for (cnt1 = 0; cnt1 < 3; cnt1++) {
//		for (cnt2 = 0; cnt2 < 3; cnt2++) {
//			printf("a[%d][%d] b[%d][%d] �Է� : ", cnt1, cnt2, cnt1, cnt2);
//			scanf("%d %d", &a[cnt1][cnt2], &b[cnt1][cnt2]);
//		}
//	}
//
//	sum(a, b);
//	mul(a, b);
//}
//
//void sum(int a[3][3], int b[3][3]) {
//	int max[3][3], cnt1, cnt2, cnt3, cnt4;
//	for (cnt1 = 0; cnt1 < 3; cnt1++) {
//		for (cnt2 = 0; cnt2 < 3; cnt2++) {
//			max[cnt1][cnt2] = a[cnt1][cnt2] + b[cnt1][cnt2];
//		}
//	}
//	printf("SUM\n");
//	for (cnt3 = 0; cnt3 < 3; cnt3++) {
//		for (cnt4 = 0; cnt4 < 3; cnt4++) {
//			printf("%3d ", max[cnt3][cnt4]);
//		}
//		printf("\n");
//	}
//}
//
//void mul(int a[3][3], int b[3][3]) {
//	int max[3][3], cnt1, cnt2, cnt3, cnt4;
//	for (cnt1 = 0; cnt1 < 3; cnt1++) {
//		for (cnt2 = 0; cnt2 < 3; cnt2++) {
//			max[cnt1][cnt2] = a[cnt1][cnt2] * b[cnt1][cnt2];
//		}
//	}
//	printf("MUL\n");
//	for (cnt3 = 0; cnt3 < 3; cnt3++) {
//		for (cnt4 = 0; cnt4 < 3; cnt4++) {
//			printf("%3d ", max[cnt3][cnt4]);
//		}
//		printf("\n");
//	}
//}

//// ������ �迭
//#include <stdio.h>
//
//int main() {
//	int size, a, b, c, d;
//
//	printf("�迭 ũ�� �Է�(N*N) : ");
//	scanf("%d", &size);
//
//	int arr[size][size];
//
//	while (1) {
//		while (1) {
//			printf("arr[%d][%d]�� �Է� : ", a, b);
//			scanf("%d", &arr[a][b]);
//		}
//	}
//}