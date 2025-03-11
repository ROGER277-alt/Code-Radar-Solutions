#include <stdio.h>

int main() {
    int num;

    // Ask for user input
    scanf("%d", &num);

    // Check if the number is between 1 and 100
    if (num >= 1 && num <= 100) {
        printf("In Range");
    } else {
        printf("Out of Range");
    }

    return 0;
}