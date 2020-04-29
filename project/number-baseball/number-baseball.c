#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARR_LEN 4

int ballcmp(int *arr1, int *arr2, int len, int *strikes, int *balls)
{
    int i = 0, j = 0;
    *strikes = 0;
    *balls = 0;

    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (arr1[i] == arr2[j])
            {
                if (i == j)
                {
                    *strikes = *strikes + 1;
                }
                else
                {
                    *balls = *balls + 1;
                }
            }
        }
    }

    if (*strikes == len)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int arr_included(int val, int *arr, int len)
{
    int i = 0;

    for (i = 0; i < len; i++)
    {
        if (arr[i] == val)
        {
            return 1;
        }
    }
    return 0;
}

int check_dup(int *user)
{
    int i = 0, j = 0;

    for (i = 0; i < ARR_LEN; i++)
    {
        for (j = 0; j < ARR_LEN; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (user[i] == user[j])
            {
                printf("[!] 같은 숫자가 반복될 수 없습니다!\n");
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    srand(time(NULL));

    int i = 0, j = 0;
    int count = 1;

    int random[ARR_LEN];

    for (i = 0; i < ARR_LEN; i++)
    {
        random[i] = -1;
    }

    for (i = 0; i < ARR_LEN; i++)
    {
        int ran;

        do
        {
            ran = rand() % 10;
        } while (arr_included(ran, random, sizeof(random) / sizeof(int)));

        random[i] = ran;
    }
    printf("[+] 난수 생성 완료!!\n");

    int user[ARR_LEN];
    int strikes, balls;

    while (1)
    {
        printf("[ ] 숫자 %d개를 입력하세요. >> ", ARR_LEN);
        for (i = 0; i < ARR_LEN; i++)
        {
            scanf("%d", &user[i]);
        }
        if (check_dup(user))
        {
            continue;
        }
        if (ballcmp(random, user, sizeof(random) / sizeof(int), &strikes, &balls))
        {
            printf("[+] %d번 만에 맞추셨습니다!!! 짝짝짝\n", count);
            return 0;
        }
        else
        {
            printf("[^] %d 볼 %d 스트라이크!!!\n", balls, strikes);
            count++;
        }
    }
}