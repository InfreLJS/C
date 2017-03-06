#include <stdio.h>

void movejuice(int *capacities, int *bottles, int fromId, int toId);

int main() {
//	int capacities[50] = { 20,20 }, bottles[50] = { 5,8 }, fromId[50] = { 0 }, toId[50] = { 1 };
	int capacities[50] = { 30,20,10 }, bottles[50] = { 10,5,5 }, fromId[50] = { 0,1,2 }, toId[50] = { 1,2,0 };
//	int capacities[50] = { 30,20,10 }, bottles[50] = { 10,5,5 }, fromId[50] = { 0,1,2 }, toId[50] = { 1,2,0 };
	int m = 0, i, j;

	while (capacities[m] != 0) { // �ֽ� �� ����
		m++;
	}

	printf("capacities = "); // �Լ� ���� �� ���� ���
	for (i = 0; i < m; i++) {
		printf("%d ", capacities[i]);
	}
	printf("\n");

	printf("bottles = ");
	for (i = 0; i < m; i++) {
		printf("%d ", bottles[i]);
	}
	printf("\n");

	printf("fromId = ");
	for (i = 0; i < m; i++) {
		printf("%d ", fromId[i]);
	}
	printf("\n");

	printf("toId = ");
	for (i = 0; i < m; i++) {
		printf("%d ", toId[i]);
	}
	printf("\n");

	for (i = 0, j = 0; i < m; i++, j++) { 
		movejuice(capacities, bottles, fromId[i], toId[j]);
	}

	printf("Returns : "); // �Լ� ���� �� ���� ���
	for (i = 0; i < m; i++) {
		printf("%d ", bottles[i]);
	}
	printf("\n");

}

void movejuice(int *capacities, int *bottles, int fromId, int toId) {
	while (capacities[toId] > bottles[toId] && bottles[fromId] > 0) { // toId�� ����뷮�� toId�� �ִ�뷮���� �۰ų� ���� fromId�� ����뷮�� 0���� ū ����
		bottles[fromId]--;
		bottles[toId]++;
	}
}