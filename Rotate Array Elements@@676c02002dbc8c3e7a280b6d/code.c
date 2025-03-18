#include <stdio.h>

// Function to rotate the array by d positions to the right
void rotateArray(int arr[], int n, int d) {
    int temp[d];

    // Store the last d elements in temp array
    for (int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }

    // Shift the rest of the array to the right
    for (int i = n - 1; i >= d; i--) {
        arr[i] = arr[i - d];
    }

    // Copy the d elements from temp to the front of the array
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 3; // Number of positions to rotate

    printf("Original array: ");
    printArray(arr, n);

    rotateArray(arr, n, d);

    printf(" ");
    printArray(arr, n);

    return 0;
}