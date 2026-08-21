#include <stdio.h>
#include <stdlib.h>

void rightRotate(int arr[], int n, int k) {
    k = k % n;
    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
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
    
    printf("=== Right Rotation ===\n");
    printf("Original: ");
    display(arr, n);
    
    rightRotate(arr, n, 2);
    printf("After right rotating by 2: ");
    display(arr, n);
    
    return 0;
}
