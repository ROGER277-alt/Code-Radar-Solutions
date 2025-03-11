#include<stdio.h>
int main() {
    int num1, num2;

    // Ask for user input
    scanf("%d", &num1);
    scanf("%d", &num2);

    // Check if num2 is the square of num1
    if (num1 * num1 == num2) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}