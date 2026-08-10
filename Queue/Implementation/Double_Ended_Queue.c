#include<stdio.h>
#define MAX 100

void insertfront(int arr[],int *front,int *rear,int item){
    if(*front ==((*rear+1)%MAX)){
        printf("Overflow\n");
    }
    else if(*front == -1){
        *front=*rear=0;
        arr[*front] = item;  
    }
    else if(*front==0){
        *front = MAX-1;
        arr[*front] = item;  
    }
    else{
        *front=*front-1;
        arr[*front]=item;
    }
}

void insertraer(int arr[],int *front,int *rear,int item){
    if(*front ==((*rear+1)%MAX)){
        printf("Overflow\n");
    }
    else if(*front == -1){
        *front=*rear=0;
        arr[*rear] = item;
    }
    else if(*rear==MAX-1){
        *rear=0;
        arr[*rear] = item;
    }
    else{
        *rear = *rear+1;
        arr[*rear]=item;
    }
}
//Till here it is just the insert part.

void deletefront(int arr[],int *front,int *rear){
    if(*front == -1){
        printf("Underflow\n");
    }
    else if(*front == *rear){
        *front = *rear = -1;
    }
    else if(*front == MAX-1){
        *front = 0;
    }
    else{
        *front = *front+1;
    }
}

void deleterear(int arr[],int *front,int *rear){
    if(*front == -1){
        printf("Underflow\n");
    }
    else if(*front == *rear){
        *front = *rear = -1;
    }
    else if(*rear == 0){
        *rear = MAX-1;
    }
    else{
        *rear = *rear-1;
    }
}

//Till here it is just the delete part.

int display(int arr[],int *front,int *rear){
    if(*front ==((*rear+1)%MAX)){
        printf("Overflow1\n");
    }
    else if(*front == -1){
        printf("Queue is empty\n");
    }
    else if(*front == 0){
        int i = *front;
        while (i != *rear)
        {
            printf("%d ", arr[i]);
            i = (i + 1) % MAX;
        }
        printf("%d ", arr[*rear]);
        printf("\n");
    }
}   
int main(){

    int front = -1;
    int rear = -1;
    int arr[MAX];
    insertfront(arr, &front, &rear, 5);
    insertfront(arr, &front, &rear, 10);
    insertraer(arr, &front, &rear, 15);
    display(arr, &front, &rear);
    insertfront(arr, &front, &rear, 20);
    display(arr, &front, &rear);

    return 0;
}

//won't work as the array is not defined so make that up first and then call the functions.