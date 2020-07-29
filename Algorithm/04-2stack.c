#define STACK_SIZE 5

typedef struct stack
{
    void *arr[STACK_SIZE];
    int top;
} stack;

void push(stack *s, int n)
{
    if ((*s).top + 1 == STACK_SIZE)
    {
        printf("Stack Full!\n");
        return;
    }
    (*s).arr[++(*s).top] = (void *)n;

    return;
}

void pop(stack *s)
{
    if ((*s).top < 0)
    {
        printf("Stack Empty!\n");
        return;
    }
    printf("%d\n", (int)(*s).arr[(*s).top]);
    (*s).top--;

    return;
}

void startStack()
{
    stack s;
    s.top = -1;
    int n;

    while (1)
    {
        printf("Input Number : ");
        scanf("%d", &n);
        if (n == 0)
        {
            pop(&s);
        }
        else
        {
            push(&s, n);
        }
    }

    return;
}