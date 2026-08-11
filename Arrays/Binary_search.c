#include<stdio.h>

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Initial array with 10 elements
    int n = 10; // Current number of elements in the array

    int key_element = 7; // Element to search for it is hard coded here but in real world it can be taken as input from user
    int left = 0, right = n - 1, mid;

    // Binary search algorithm time complexity is O(log n) in worst case
    while(left <= right){
        mid = left + (right - left) / 2; // To avoid overflow

        if(arr[mid] == key_element){
            printf("Element found at index %d\n", mid);
            break;
        }
        else if(arr[mid] < key_element){
            left = mid + 1; // Search in the right half
        }
        else{
            right = mid - 1; // Search in the left half
        }
    }
    return 0;
}