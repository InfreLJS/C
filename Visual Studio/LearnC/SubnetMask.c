#include <stdio.h>
#include <stdint.h>
#include <math.h>

void uint8ToBin(uint8_t dec) {
	int i = 7;
	for (; i >= 0; i--) {
		printf("%d", (dec >> i) & 1);
	}
	printf("\n");
}

int getNetworkID(uint8_t x, uint8_t y) {
	int i = 7;
	uint8_t res = 0;
	for (; i >= 0; i--) {
		res += ((x >> i) & 1)&(y >> i) & 1)*pow(2, 8 - i);
	}
}

int main() {
	uint8_t oct1 = 0, oct2 = 0, oct3 = 0, oct4 = 0;
	
	uint8_t sub1 = 0, sub2 = 0, sub3 = 0, sub4 = 0;

	printf("IP Address를 입력하세요 >> ");
	scanf("%d.%d.%d.%d", &oct1, &oct2, &oct3, &oct4);

	printf("Subnet Mask를 입력하세요 >> ");
	scanf("%d.%d.%d.%d", &sub1, &sub2, &sub3, &sub4);

	printf("Network ID : %u.%u.%u.%u\n", oct1&sub1, oct2&sub2, oct3&sub3, oct4&sub4);
	uint8ToBin(oct4);
	uint8ToBin(~oct4);
	printf("Broadcast IP : %u.%u.%u.%u\n", oct1&sub1, oct2&sub2, oct3&sub3, oct4);

	return 0;
}