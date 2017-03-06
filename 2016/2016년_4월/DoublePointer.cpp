#include <stdio.h>

int swap(int* ptr1, int* ptr2) {
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main() {
	int a = 10, b = 20;
	int* ptr1 = &a;
	int* ptr2 = &b;
	
	printf("%d %d\n", a,  b);
	swap(ptr1, ptr2);
	printf("%d %d\n", a, b);
	
	return 0;
}
