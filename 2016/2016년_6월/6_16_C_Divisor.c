/*
���� : 2016�� 6�� 16�� 5, 6����

��� : 1�г� 1�� ����

���� : ���缮

������ : �ִ����� ���ϱ� (�迭 �̿�)

�� : C��� ����

��� : C���
*/

#include <stdio.h>
#define ARRMAX 100  // �迭 ũ�� ���

int main() {
	int in1, in2, cnt1, cnt2;  // �Է� �� in1, in2, ī���� ���� cnt1, cnt2
	int d1_index = 1, d2_index = 1, d3_index = 0, max = 0;  // �ε��� �� d1, d2 ,d3, �ִ����� max
	int d1[ARRMAX] = { 1 }, d2[ARRMAX] = { 1 }, d3[ARRMAX] = { 1 };  // ��� �迭 d1, d2, ����� �迭 d3

	printf("�� �� �Է� : ");
	scanf("%d %d", &in1, &in2);  // �Է� �� �ޱ�

	// ��� ���ϱ�
	for (cnt1 = 2; cnt1 <= in1; cnt1++) {
		if (in1 % cnt1 == 0) {
			d1[d1_index] = cnt1;
			d1_index++;
		}
	}
	for (cnt1 = 2; cnt1 <= in2; cnt1++) {
		if (in2 % cnt1 == 0) {
			d2[d2_index] = cnt1;
			d2_index++;
		}
	}

	// �����, �ִ����� ���ϱ�
	for (cnt1 = 0; cnt1 < d1_index; cnt1++) {
		for (cnt2 = 0; cnt2 < d2_index; cnt2++) {
			if (d1[cnt1] == d2[cnt2]) {  // ����� ���ϱ�
				d3[d3_index] = d1[cnt1];
				d3_index++;
				if (d1[cnt1] > max)  // �ִ����� ���ϱ�
					max = d1[cnt1];
			}
		}
	}

	// ���
	printf("\n%d�� ��� : ", in1);  // in1 ��� d1 ���
	for (cnt1 = 0; cnt1 < d1_index; cnt1++) {
		printf("%d ", d1[cnt1]);
	}

	printf("\n\n%d�� ��� : ", in2);  // in2 ��� d2 ���
	for (cnt1 = 0; cnt1 < d2_index; cnt1++) {
		printf("%d ", d2[cnt1]);
	}

	printf("\n\n%d�� %d�� ����� : ", in1, in2);  // ����� d3 ���
	for (cnt1 = 0; cnt1 < d3_index; cnt1++) {
		printf("%d ", d3[cnt1]);
	}

	printf("\n\n%d�� %d�� �ִ����� : %d\n\n", in1, in2, max);  // �ִ����� max ���

	// ���α׷� ����
	return 0;
}