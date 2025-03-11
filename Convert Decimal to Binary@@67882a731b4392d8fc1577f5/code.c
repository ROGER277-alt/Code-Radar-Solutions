// Your code here...
#include <stdio.h>

void decimalToBinary(int num) {
    // Array to store binary number
    int binary[32]; 
    int i = 0;

    // If the number is 0, print 0 directly
    if (num == 0) {
        printf("0");
        return;
    }

    // Convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2;  // Store remainder (either 0 or 1)
        num = num / 2;         // Divide the number by 2
        i++;
    }

    // Print binary number in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int num;
    scanf("%d", &num);

    // Call the function to print binary representation
    printf("Binary equivalent: ");
    decimalToBinary(num);
    printf("\n");

    return 0;
}