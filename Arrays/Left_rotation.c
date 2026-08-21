#include <stdio.h>
#include <stdlib.h>

void leftRotate(int arr[], int n, int k) {
    k = k % n;
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];
    }
    for (int i = 0; i < n - k; i++) {
        arr[i] = arr[i + k];
    }
    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];
    }
}

void display(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    
    printf("=== Left Rotation ===\n");
    printf("Original: ");
    display(arr, n);
    
    leftRotate(arr, n, 2);
    printf("After left rotating by 2: ");
    display(arr, n);
    
    return 0;
}
