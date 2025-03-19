#include <stdio.h>
#include <stdbool.h>

// Function to check if the array is sorted in ascending order
bool isArraySorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;  // If any element is greater than the next, it's not sorted
        }
    }
    return true;  // If no elements are out of order, the array is sorted
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Example sorted array
    int n = sizeof(arr) / sizeof(arr[0]);


    // Check if the array is sorted
    if (isArraySorted(arr, n)) {
        printf("Sorted");
    } else {
        printf("Not Sorted");
    }

    return 0;
}