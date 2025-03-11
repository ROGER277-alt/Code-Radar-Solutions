#include<stdio.h>
int main() {
    int num1, num2;

    // Ask for user input
    scanf("%d", &num1);
    scanf("%d", &num2);

    // Check if num2 is the square of num1
    if (num1 * num1 == num2) {
        printf("%d is the square of %d.\n", num2, num1);
    } else {
        printf("%d is not the square of %d.\n", num2, num1);
    }

    return 0;
}