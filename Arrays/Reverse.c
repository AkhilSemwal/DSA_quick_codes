#include <stdio.h>

void reverseArray(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
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
    
    printf("=== Reverse Array ===\n");
    printf("Original: ");
    display(arr, n);
    
    reverseArray(arr, n);
    printf("Reversed: ");
    display(arr, n);
    
    return 0;
}
