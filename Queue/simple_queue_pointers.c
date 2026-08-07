#include <stdio.h>
#include <stdlib.h>

void enqueue(int *queue, int *rear, int size, int value) {
    if (*rear == size - 1) {
        printf("Queue Overflow\n");
        return;
    }
    (*rear)++;
    queue[*rear] = value;
}

void dequeue(int *queue, int *front, int rear) {
    if (*front > rear) {
        printf("Queue Underflow\n");
        return;
    }
    printf("Deleted: %d\n", queue[*front]);
    (*front)++;
}

void peek(int *queue, int front, int rear) {
    if (front > rear) {
        printf("Queue is Empty\n");
        return;
    }
    printf("Front Element: %d\n", queue[front]);
}

void display(int *queue, int front, int rear) {
    if (front > rear) {
        printf("Queue is Empty\n");
        return;
    }

    printf("Queue: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int size = 5;
    int *queue = (int *)malloc(size * sizeof(int));

    int front = 0;
    int rear = -1;

    enqueue(queue, &rear, size, 10);
    enqueue(queue, &rear, size, 20);
    enqueue(queue, &rear, size, 30);

    display(queue, front, rear);

    dequeue(queue, &front, rear);

    display(queue, front, rear);

    peek(queue, front, rear);

    free(queue);
    return 0;
}