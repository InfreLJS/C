#include <stdio.h>

void Add(struct list list, int data);
void Delete(struct list dellist);

struct list {
	int data;
	int key;
	struct list * next;
};
int count = 1;

int main() {
	struct list list1 = { 100, count++ }, list2 = { 200, count++ }, list3 = { 300, count++, NULL };

	list1.next = &list2;
	list2.next = &list3;

}

void Add(struct list list, int data) {
	int a = 0;
	struct list newlist = { data, count++ };

	while (a < count) {
		
	}
}

void Delete(struct list dellist) {

}