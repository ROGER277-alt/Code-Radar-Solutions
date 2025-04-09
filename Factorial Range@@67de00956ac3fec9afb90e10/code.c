// Your code here...
#include <stdio.h>

// Function to calculate factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int start, end;

    scanf("%d", &start);

    scanf("%d", &end);

    if (start > end) {
        printf("Invalid range. Start should be <= end.\n");
        return 1;
    }

    for (int i = start; i <= end; i++) {
        printf("%d! = %lld\n", i, factorial(i));
    }

    return 0;
}