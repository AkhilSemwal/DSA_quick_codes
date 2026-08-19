#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {12, 23, 34, 45, 51, 67, 78};
    int n = 7;
    
    printf("=== Binary Search ===\n");
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n\n");
    
    int key = 45;
    int result = binarySearch(arr, n, key);
    printf("Search for %d: %s (Index: %d)\n", key, result != -1 ? "Found" : "Not Found", result);
    
    key = 100;
    result = binarySearch(arr, n, key);
    printf("Search for %d: %s\n", key, result != -1 ? "Found" : "Not Found");
    
    return 0;
}
