#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}

int main() {
    int arr[] = {45, 23, 51, 12, 67, 34, 78};
    int n = 7;
    
    printf("=== Linear Search ===\n");
    printf("Array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n\n");
    
    int key = 67;
    int result = linearSearch(arr, n, key);
    printf("Search for %d: %s (Index: %d)\n", key, result != -1 ? "Found" : "Not Found", result);
    
    key = 100;
    result = linearSearch(arr, n, key);
    printf("Search for %d: %s\n", key, result != -1 ? "Found" : "Not Found");
    
    return 0;
}
