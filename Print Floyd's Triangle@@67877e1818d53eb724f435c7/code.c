#include <stdio.h>

int main() {
    int rows, num = 1;

    // Input the number of rows
    scanf("%d", &rows);

    // Generate Floyd's Triangle
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;  // Increment the number
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}