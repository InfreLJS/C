#include <stdio.h>
#include <stdlib.h>
#ifndef UTIL
#define UTIL
#endif
#include "./01maxmin.c"
#include "./02swap.c"
#include "./03rotate.c"
#include "./04-1queue.c"
#include "./04-2stack.c"
#include "./05linkedlist.c"
#include "./06more.c"

int main(int argc, char *argv[])
{
    printf("----- Algorithm -----\n");

    // printf("----- 0.1 최대와 최소 -----\n");
    // int arr[] = {1, 2, 3, 4};
    // printf("max1(1, 2) : %d\n", max1(1, 2));
    // printf("min1(1, 2) : %d\n", min1(1, 2));
    // printf("max2(1, 2) : %d\n", max2(1, 2));
    // printf("min2(1, 2) : %d\n", min2(1, 2));
    // printf("macro_max(1, 2) : %d\n", macro_max(1, 2));
    // printf("macro_min(1, 2) : %d\n", macro_min(1, 2));
    // printf("max_arr(arr, 4) : %d\n", max_arr(arr, 4));

    // printf("----- 0.2 두 변수의 값 바꾸기 -----\n");
    // int a = 1, b = 2;
    // printf("before swap() : a = %d, b = %d\n", a, b);
    // swap(&a, &b);
    // printf("after swap() : a = %d, b = %d\n", a, b);

    // printf("----- 0.3 배열 회전 -----\n");
    // int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // printf("before left_rotate(arr, 0, 9) : ");
    // print_arr(arr, 10);
    // left_rotate(arr, 0, 9);
    // printf("after left_rotate(arr, 0, 9) : ");
    // print_arr(arr, 10);
    // int arr2[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // printf("before right_rotate(arr2, 0, 9) : ");
    // print_arr(arr2, 10);
    // right_rotate(arr2, 0, 9);
    // printf("after right_rotate(arr2, 0, 9) : ");
    // print_arr(arr2, 10);
    // int arr3[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // printf("before left_rotate_n(arr3, sizeof(arr3), 0, 9, 4) : ");
    // print_arr(arr3, 10);
    // left_rotate_n(arr3, sizeof(arr3), 0, 9, 4);
    // printf("after left_rotate_n(arr3, sizeof(arr3), 0, 9, 4) : ");
    // print_arr(arr3, 10);
    // int arr4[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // printf("before right_rotate_n(arr4, sizeof(arr4), 0, 9, 4) : ");
    // print_arr(arr4, 10);
    // right_rotate_n(arr4, sizeof(arr4), 0, 9, 4);
    // printf("after right_rotate_n(arr4, sizeof(arr4), 0, 9, 4) : ");
    // print_arr(arr4, 10);

    // printf("----- 0.4 은행 대기번호 관리 -----\n");
    // startQueue();
    // startStack();

    // printf("----- 0.5 연결리스트 -----\n");
    // startLinkedList();

    printf("----- 0.6 추가 문제 -----\n");
    // int arr[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    // printf("%d\n", all_is(arr, 10, 1));
    int n;
    scanf("%d", &n);
    printf("%d\n", count_one(n));

    return 0;
}