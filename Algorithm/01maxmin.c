#define macro_max(x, y) ((x > y) ? (x) : (y))
#define macro_min(x, y) ((x < y) ? (x) : (y))

int max1(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    return y;
}

int min1(int x, int y)
{
    if (x < y)
    {
        return x;
    }
    return y;
}

int max2(int x, int y)
{
    return (x > y) ? (x) : (y);
}

int min2(int x, int y)
{
    return (x < y) ? (x) : (y);
}

int max_arr(int arr[], int arr_len)
{
    int max, i;

    max = arr[0];
    for (i = 1; i < arr_len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}