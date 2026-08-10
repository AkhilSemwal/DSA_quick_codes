#include<stdio.h>

int main() {
    //given an array of integers, traverse the array and print each element
    int arr[5] = {1, 2, 3, 4, 5};
    int i;

    printf("Array elements are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
