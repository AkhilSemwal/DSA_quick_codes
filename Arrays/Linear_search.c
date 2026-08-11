#include <stdio.h>

int main(){
    int arr[10] = {1, 2, 3, 4, 5}; // Initial array with 5 elements
    int n = 5; // Current number of elements in the array

    int key_element = 3; // Element to search for it is hard coded here but in real world it can be taken as input from user
    int i, found = 0;

    //go through every element to search it time complexity is O(n) in worst case
    for(i = 0; i < n; i++){
        if(arr[i] == key_element){
            found = 1;
            printf("Element found at index %d\n", i);
            break;
        }
    }

    //to count how many times the element is present in the array we can use another loop to count it 
    //count is also a linear search so time complexity is O(n) in worst case

    if(found == 0){
        printf("Element not found\n");
    }

    int count = 0;
    for(i = 0; i < n; i++){
        if(arr[i] == key_element){
            count++;
        }
    }
    printf("Element occurs %d times in the array\n", count);

    return 0;
}
