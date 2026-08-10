#include<stdio.h>

//When we talk about types of insertion in an array, we categorize them based on the location where the new element is placed. There are three primary types:

//Insertion at the End: Adding a new element immediately after the last occupied position in the array.

//Insertion at the Beginning: Placing a new element at the very first position (index 0).

//Insertion at a Specific Position: Inserting the element at a given index k, somewhere between the beginning and the end.

int main(){
    int arr[10] = {1, 2, 3, 4, 5}; // Initial array with 5 elements
    int n = 5; // Current number of elements in the array
    int i, pos, value;

    // Insertion at the End
    printf("Inserting at the end:\n");
    value = 6; // New value to insert
    arr[n] = value; // Insert at the end
    n++; // Increase the count of elements

    printf("Array after insertion at the end:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insertion at the Beginning
    printf("Inserting at the beginning:\n");
    value = 0; // New value to insert
    for(i = n; i > 0; i--) {
        arr[i] = arr[i - 1]; // Shift elements to the right
    }
    arr[0] = value; // Insert at the beginning
    n++; // Increase the count of elements

    printf("Array after insertion at the beginning:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insertion at a Specific Position
    printf("Inserting at a specific position:\n");
    pos = 3; // Position to insert (0-based index)
    value = 99; // New value to insert
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1]; // Shift elements to the right
    }
    arr[pos] = value; // Insert at the specific position
    n++; // Increase the count of elements

    printf("Array after insertion at position %d:\n", pos);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}