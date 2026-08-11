#include<stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5}; // Initial array with 5 elements
    int n = 5; // Current number of elements in the array

    // Reverse the array in place

    // Time complexity is O(n/2) which simplifies to O(n) in worst case

    //you put the first element in the last position and the last element in the first position and then you move to the next element
    //and repeat this process until you reach the middle of the array
    
    //thats why we only need to loop through half of the array because the other half will be reversed automatically

    //temp is use d to store the value of the current element so that we can swap it with the corresponding element from the other 
    //end of the array
    for(int i = 0; i < n / 2; i++){
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    // Print the reversed array
    printf("Reversed array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}