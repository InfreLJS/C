#define QUEUE_SIZE 5

typedef struct queue
{
    void *arr[QUEUE_SIZE];
    int head;
    int tail;
    int length;
} queue;

void enqueue(queue *q, int n)
{
    if ((*q).length == QUEUE_SIZE)
    {
        printf("Queue Full!\n");
        return;
    }
    (*q).length = (*q).length + 1;
    (*q).tail = ((*q).tail + 1) % QUEUE_SIZE;
    (*q).arr[(*q).tail] = (void *)n;

    return;
}

void dequeue(queue *q)
{
    if ((*q).length == 0)
    {
        printf("Queue Empty!\n");
        return;
    }
    printf("%d\n", (int)(*q).arr[(*q).head]);
    (*q).head = ((*q).head + 1) % QUEUE_SIZE;
    (*q).length = (*q).length - 1;

    return;
}

void startQueue()
{
    queue q;
    int n;
    q.head = 0;
    q.tail = -1;
    q.length = 0;

    while (1)
    {
        printf("Input Number : ");
        scanf("%d", &n);
        if (n == 0)
        {
            dequeue(&q);
        }
        else
        {
            enqueue(&q, n);
        }
    }

    return;
}