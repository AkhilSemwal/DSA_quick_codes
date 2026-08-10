#include<stdio.h>

//Just like insertion, deletion in an array is heavily dictated by its contiguous memory layout. When you delete an element, you cannot simply leave an "empty" gap in the middle of the array, because an array must remain a continuous block of valid data up to its current size.

//Deletion is also categorized by the position of the element being removed:

//Deletion at the End: Removing the very last valid element in the array.

//Deletion at the Beginning: Removing the first element (at index 0).

//Deletion at a Specific Position: Removing an element at a given index k.

int main(){
    int arr[10] = {1, 2, 3, 4, 5}; // Initial array with 5 elements
    int n = 5; // Current number of elements in the array
    int i, pos;

    // Deletion at the End
    printf("Deleting at the end:\n");
    n--; // Simply decrease the count of elements

    printf("Array after deletion at the end:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Deletion at the Beginning
    printf("Deleting at the beginning:\n");
    for(i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1]; // Shift elements to the left
    }
    n--; // Decrease the count of elements

    printf("Array after deletion at the beginning:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Deletion at a Specific Position
    printf("Deleting at a specific position:\n");
    pos = 2; // Position to delete (0-based index)
    for(i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1]; // Shift elements to the left
    }
    n--; // Decrease the count of elements

    printf("Array after deletion at position %d:\n", pos);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}