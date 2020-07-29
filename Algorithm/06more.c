void print_arr(int arr[], int arr_len)
{
    int i;

    printf("{");
    for (i = 0; i < arr_len - 1; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("%d}\n", arr[arr_len - 1]);

    return;
}

int all_is(int arr[], int arr_len, int k)
{
    int i;

    for (i = 0; i < arr_len; i++)
    {
        if (arr[i] != k)
        {
            return 0;
        }
    }
    return 1;
}

int count_one(int num)
{
    int i, count = 0;

    if (num == 0)
    {
        return 0;
    }

    while (num > 1)
    {
        count += num % 2;
        num /= 2;
    }

    return count + 1;
}