#include <stdio.h>

#define MAX 5

void enqueue(int queue[], int *front, int *rear, int value)
{
    if (*front == (*rear + 1) % MAX)
    {
        printf("Queue Overflow\n");
        return;
    }

    if (*front == -1)
        *front = *rear = 0;
    else
        *rear = (*rear + 1) % MAX;

    queue[*rear] = value;
    printf("Inserted: %d\n", value);
}

void dequeue(int queue[], int *front, int *rear)
{
    if (*front == -1)
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted: %d\n", queue[*front]);

    if (*front == *rear)
        *front = *rear = -1;
    else
        *front = (*front + 1) % MAX;
}

void peek(int queue[], int front)
{
    if (front == -1)
    {
        printf("Queue is Empty\n");
        return;
    }

    printf("Front Element: %d\n", queue[front]);
}

void display(int queue[], int front, int rear)
{
    if (front == -1)
    {
        printf("Queue is Empty\n");
        return;
    }

    int i = front;

    printf("Queue: ");
    while (1)
    {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % MAX;
    }
    printf("\n");
}

int main()
{
    int queue[MAX];
    int front = -1, rear = -1;
    int choice, value;

    do
    {
        printf("\n--- Circular Queue ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            enqueue(queue, &front, &rear, value);
            break;

        case 2:
            dequeue(queue, &front, &rear);
            break;

        case 3:
            peek(queue, front);
            break;

        case 4:
            display(queue, front, rear);
            break;

        case 5:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}