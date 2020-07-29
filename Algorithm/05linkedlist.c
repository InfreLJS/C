typedef struct _node
{
    int key;
    struct _node *next;
} node_t;

int count_node(node_t *head)
{
    node_t *node = head;
    int count = 0;

    while (node != NULL)
    {
        node = node->next;
        count++;
    }

    return count;
}

node_t *search_node(node_t *head, int n)
{
    node_t *node = head;
    int i;

    if (n > count_node(head))
    {
        return NULL;
    }
    for (i = 0; i < n; i++)
    {
        node = node->next;
    }

    return node;
}

void print_nodes(node_t *head)
{
    node_t *node = head;

    if (head == NULL)
    {
        printf("head -> <- tail\n");
        return;
    }

    printf("head -> ");
    while (node->next != NULL)
    {
        printf("[%d] -> ", node->key);
        node = node->next;
    }
    printf("[%d] <- tail / Total : %d Nodes\n", node->key, count_node(head));

    return;
}

void insert_node(node_t **head, node_t **tail, int data, int n)
{
    node_t *new_node = (node_t *)malloc(sizeof(node_t));
    node_t *f_node;

    new_node->key = data;
    if (*head == NULL)
    {
        new_node->next = NULL;
        *head = new_node;
        *tail = new_node;
    }
    else
    {
        if (n == 0)
        {
            new_node->next = *head;
            *head = new_node;
        }
        else if (n >= count_node(*head))
        {
            new_node->next = NULL;
            (*tail)->next = new_node;
            *tail = new_node;
        }
        else
        {
            f_node = search_node(*head, n - 1);
            if (f_node == NULL)
            {
                printf("Error on insert_node()!\n");
                return;
            }
            new_node->next = f_node->next;
            f_node->next = new_node;
        }
    }
}

int delete_node(node_t **head, node_t **tail, int n)
{
    node_t *node, *f_node;
    int r;

    if (*head == NULL)
    {
        return -1;
    }
    if (n == 0)
    {
        node = *head;
        *head = (*head)->next;
        if (*head == NULL)
        {
            *tail = NULL;
        }
        r = node->key;
        free(node);
        return r;
    }
    else if (n >= count_node(*head))
    {
        if (count_node(*head) < 2)
        {
            r = (*head)->key;
            *head = NULL;
            *tail = NULL;
            return r;
        }
        node = *tail;
        *tail = search_node(*head, count_node(*head) - 2);
        (*tail)->next = NULL;
        r = node->key;
        free(node);
        return r;
    }
    else
    {
        node = search_node(*head, n);
        f_node = search_node(*head, n - 1);
        if (f_node == NULL)
        {
            return -2;
        }
        f_node->next = node->next;
        if (node->next == NULL)
        {
            *tail = f_node;
        }
        r = node->key;
        free(node);
        return r;
    }
}

void startLinkedList()
{
    node_t *head = NULL, *tail = NULL;
    int data, i, result;

    while (1)
    {
        printf("Input (Number Index) : ");
        scanf("%d %d", &data, &i);
        if (data == 0)
        {
            result = delete_node(&head, &tail, i);
            if (result == -1)
            {
                printf("LinkedList Empty!\n");
            }
            else if (result == -2)
            {
                printf("Error on delete_node()!\n");
            }
            else
            {
                printf("%d\n", result);
            }
        }
        else
        {
            insert_node(&head, &tail, data, i);
        }
        print_nodes(head);
    }

    // int i = 1;
    // while (1)
    // {
    //     insert_node(&head, &tail, 1);
    //     printf("%d\n", i);
    //     i++;
    // }

    return;
}