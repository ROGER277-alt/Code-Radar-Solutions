#include <stdio.h>

int main() {
    int num;

    // Ask for user input
    scanf("%d", &num);

    // Check if the number is between 1 and 100
    if (num >= 1 && num <= 100) {
        printf("The number %d is between 1 and 100.\n", num);
    } else {
        printf("The number %d is not between 1 and 100.\n", num);
    }

    return 0;
}