#include <stdio.h>

int main() {
	int n = 1;
	int max = 0;
	int height[10] = {170,155,168,162,158,172,178,160,153,164};
	
	while (n <= 10) {
		if (height[n - 1] > max) {
			max = height[n - 1];
		}
		n = n + 1;
	}
	printf("가장 큰 키는 %d cm입니다.\n", max);
}