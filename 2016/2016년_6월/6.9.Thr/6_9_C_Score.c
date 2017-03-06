#include <stdio.h>

int main() {
	FILE * in = fopen("input.txt", "r");
	FILE * out = fopen("output.txt", "w");
	int g, h;
	struct student {
		int mid, fin, su, rank;
		double mid_ra, fin_ra, su_ra, score;
		char name[5];
	};

	struct student stu[5] = { 0 };

	for (g = 0; g < 5; g++) {
		fscanf(in, "%s %d %lf %d %lf %d %lf", stu[g].name, &stu[g].mid, &stu[g].mid_ra, &stu[g].fin, &stu[g].fin_ra, &stu[g].su, &stu[g].su_ra);
		stu[g].score = stu[g].mid * stu[g].mid_ra + stu[g].fin * stu[g].fin_ra + stu[g].su * stu[g].su_ra;
	}

	for (g = 0; g < 5; g++) {
		stu[g].rank = 1;
		for (h = 0; h < 5; h++) {
			if (stu[g].score < stu[h].score) {
				stu[g].rank++;
			}
		}
	}

	fprintf(out, "이름  중간 비율 기말 비율 수행 비율 환산 등수\n");
	for (g = 0; g < 5; g++) {
		fprintf(out, "%4s %4d %4.1lf %4d %4.1lf %4d %4.1lf %4.1lf %3d\n", stu[g].name, stu[g].mid, stu[g].mid_ra, stu[g].fin, stu[g].fin_ra, stu[g].su, stu[g].su_ra, stu[g].score, stu[g].rank);
	}

	return 0;
}