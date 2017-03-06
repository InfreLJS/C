//#include <stdio.h>
//
//int main() {
//	struct student {
//		int num, kor, eng, mat, tot, rank;
//		float avg;
//		char name[20];
//	};
//
//	struct student *stu = (struct student*)malloc(sizeof(struct student) * 5);
//
//	FILE *in = fopen("jumsu.txt", "r");
//	FILE *out = fopen("output.txt", "w");
//
//	int a = 0, b;
//	printf("번호     이름   국어 영어 수학  총점   평균  순위\n");
//	while (a < 5) {
//		fscanf(in, "%d %s %d %d %d", &stu[a].num, &stu[a].name, &stu[a].kor, &stu[a].eng, &stu[a].mat);
//		stu[a].tot = stu[a].kor + stu[a].eng + stu[a].mat;
//		stu[a].avg = stu[a].tot / 3.0;
//		a++;
//	}
//	for (a = 0; a < 5; a++) {
//		stu[a].rank = 1;
//		for (b = 0; b < 5; b++) {
//			if (stu[a].tot < stu[b].tot)
//				stu[a].rank++;
//		}
//	}
//	for (a = 0; a < 5; a++) {
//		printf("%3d %10s %4d %4d %4d %5d %7.2f %3d\n", stu[a].num, stu[a].name, stu[a].kor, stu[a].eng, stu[a].mat, stu[a].tot, stu[a].avg, stu[a].rank);
//	}
//}