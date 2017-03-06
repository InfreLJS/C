#include "SeatArrangement_Header_Ver0.2.h"

int main() {
	int arr[20] = { 0 }, i, seed;

	printf("시드 값 입력 : ");
	scanf(" %d", &seed);

	random(arr, seed);

	gprint(arr);
	
	return 0;
}