//#include <stdio.h>
//
//int main() {
//	struct student {
//		int num, kor, eng, mat, tot, rank;
//		float avg;
//		char name[20];
//	};
//
//	int a = 0, b;
//	struct student stu[5], temp;
//
//	FILE *in, *out1, *out2;
//	in = fopen("jumsu.txt", "r");
//	out1 = fopen("output.txt", "w");
//	out2 = fopen("sort.txt", "w");
//
//	while (a < 5) { // �Է¹ޱ�
//		fscanf(in, "%d %s %d %d %d", &stu[a].num, &stu[a].name, &stu[a].kor, &stu[a].eng, &stu[a].mat);
//		stu[a].tot = stu[a].kor + stu[a].eng + stu[a].mat;
//		stu[a].avg = stu[a].tot / 3.0;
//		a++;
//	}
//	for (a = 0; a < 5; a++) { // ���� �ű�� �ݺ���
//		stu[a].rank = 1;
//		for (b = 0; b < 5; b++) {
//			if (stu[a].tot < stu[b].tot)
//				stu[a].rank++;
//		}
//	}
//
//	printf("��ȣ     �̸�   ���� ���� ����  ����   ���  ����\n");
//	fprintf(out1, "��ȣ     �̸�   ���� ���� ����  ����   ���  ����\n");
//	for (a = 0; a < 5; a++) { // ���� �� ���
//		printf("%3d %10s %4d %4d %4d %5d %7.2f %3d\n", stu[a].num, stu[a].name, stu[a].kor, stu[a].eng, stu[a].mat, stu[a].tot, stu[a].avg, stu[a].rank);
//		fprintf(out1, "%3d %10s %4d %4d %4d %5d %7.2f %3d\n", stu[a].num, stu[a].name, stu[a].kor, stu[a].eng, stu[a].mat, stu[a].tot, stu[a].avg, stu[a].rank);
//	}
//
//	for (a = 0; a <= 3; a++) { // �������� �����ϴ� �ݺ���
//		for (b = a+1; b <= 4; b++) {
//			if (stu[a].tot < stu[b].tot) {
//				temp = stu[a];
//				stu[a] = stu[b];
//				stu[b] = temp;
//			}
//		}
//	}
//
//	printf("\n��ȣ     �̸�   ���� ���� ����  ����   ���  ����\n");
//	fprintf(out2, "��ȣ     �̸�   ���� ���� ����  ����   ���  ����\n");
//	for (a = 0; a < 5; a++) { // ���� �� ���
//		printf("%3d %10s %4d %4d %4d %5d %7.2f %3d\n", stu[a].num, stu[a].name, stu[a].kor, stu[a].eng, stu[a].mat, stu[a].tot, stu[a].avg, stu[a].rank);
//		fprintf(out2, "%3d %10s %4d %4d %4d %5d %7.2f %3d\n", stu[a].num, stu[a].name, stu[a].kor, stu[a].eng, stu[a].mat, stu[a].tot, stu[a].avg, stu[a].rank);
//	}
//}