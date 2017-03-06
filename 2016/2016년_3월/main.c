/*#include <stdio.h>

int main() {
	int kor[16] = {0}, eng[16] = {0}, mat[16] = {0}, tot[16] = {0}, rank[16] = {0};
	int cnt = 0, a, b, c, stunum;
	float avg[16] = {0};
	FILE *in = fopen("점수.txt", "r");
	FILE *out = fopen("output.txt", "w");
	
	printf("학생 수 입력 : ");
	scanf("%d", &stunum);
	
	while(cnt < stunum) {
		fscanf(in, "%d %d %d", &kor[cnt], &mat[cnt], &eng[cnt]);
		tot[cnt] = kor[cnt] + mat[cnt] + eng[cnt];
		avg[cnt] = tot[cnt] / 3.0;
		cnt++;
	}
	
	for(a = 0; a < stunum; a++) {
		rank[a] = 1;
		for(b = 0; b < stunum; b++) {
			if(tot[a] < tot[b])
				rank[a] = rank[a]+1;
		}
	}
	
	for(c = 0; c < stunum; c++) {
		printf("국 어  수 학  영 어  총 점  평 균    등 수\n");
		printf("%3d    %3d    %3d  %5d   %7.2f     %3d\n", kor[c], mat[c], eng[c], tot[c], avg[c], rank[c]);
		fprintf(out, "%3d    %3d    %3d  %5d   %7.2f     %3d\n", kor[c], mat[c], eng[c], tot[c], avg[c], rank[c]);
	}
	
	return 0;
}
*/