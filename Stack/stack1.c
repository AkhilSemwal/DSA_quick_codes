#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Stack {
    int arr[MAX];
    int top;
};

// Initialize stack
void init(struct Stack *s) {
    s->top = -1;
}

// Push element
void push(struct Stack *s, int val) {
    if (s->top == MAX - 1) {
        printf("Stack Overflow\n");
        exit(1);
    }
    s->arr[++(s->top)] = val;
}

// Pop element
void pop(struct Stack *s) {
    if (s->top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    }
    s->top--;
}

// Return top element
int top(struct Stack *s) {
    if (s->top == -1) {
        printf("Stack is Empty\n");
        exit(1);
    }
    return s->arr[s->top];
}

// Check if stack is empty
int empty(struct Stack *s) {
    return s->top == -1;
}

int main() {
    struct Stack s;
    init(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);

    while (!empty(&s)) {
        printf("%d\n", top(&s));
        pop(&s);
    }

    printf("\n");
    return 0;
}