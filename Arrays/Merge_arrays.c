#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }
    while (i < n1) {
        result[k++] = arr1[i++];
    }
    while (j < n2) {
        result[k++] = arr2[j++];
    }
}

void display(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr1[] = {10, 20, 30, 40};
    int n1 = 4;
    int arr2[] = {15, 25, 35, 45};
    int n2 = 4;
    int result[n1 + n2];
    
    printf("=== Merge Two Sorted Arrays ===\n");
    printf("Array 1: ");
    display(arr1, n1);
    printf("Array 2: ");
    display(arr2, n2);
    
    mergeArrays(arr1, n1, arr2, n2, result);
    printf("Merged:  ");
    display(result, n1 + n2);
    
    return 0;
}
