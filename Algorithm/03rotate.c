#include <string.h>

void left_rotate(int arr[], int s, int t)
{
    int temp, i;

    temp = arr[s];
    for (i = s; i < t; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[t] = temp;

    return;
}

void right_rotate(int arr[], int s, int t)
{
    int temp, i;

    temp = arr[t];
    for (i = t; i > s; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[s] = temp;

    return;
}

void left_rotate_n(int arr[], int arr_size, int s, int t, int k)
{
    int tempArr[10], i;

    memcpy(tempArr, arr, arr_size);
    for (i = s; i <= t; i++)
    {
        arr[i] = tempArr[((i + k - s) % (t - s + 1)) + s];
    }

    return;
}

void right_rotate_n(int arr[], int arr_size, int s, int t, int k)
{
    int tempArr[10], i;

    memcpy(tempArr, arr, arr_size);
    for (i = s; i <= t; i++)
    {
        arr[((i + k - s) % (t - s + 1)) + s] = tempArr[i];
    }

    return;
}