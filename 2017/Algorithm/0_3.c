#include <stdio.h>

void left_rotate(int arr[], int s, int t);
void right_k_rotate(int arr[], int s, int t, int k);
void print_arr(int arr[], int len);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    right_k_rotate(arr, 1, 7, 5);

    print_arr(arr, 10);
}

void left_rotate(int arr[], int s, int t) {
    size_t i;
    int temp;

    temp = arr[s];
    for (i = s; i < t; i++) {
        arr[i] = arr[i + 1];
    }
    arr[t] = temp;

    return;
}

void right_k_rotate(int arr[], int s, int t, int k) {
    size_t i;

    if (k >= (t - s + 1)) {
        k = k % (t - s + 1);
    }

    int temp[k];

    for (i = k; i > 0; i--) {
        temp[k - i] = arr[t - i + 1];
    }

    for (i = t; i > s + k - 1; i--) {
        arr[i] = arr[i - k];
    }

    for (i = s; i < s + k; i++) {
        arr[i] = temp[i - s];
    }

    return;
}

void print_arr(int arr[], int len) {
    printf("{ ");
    for (size_t i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("}\n");
}
