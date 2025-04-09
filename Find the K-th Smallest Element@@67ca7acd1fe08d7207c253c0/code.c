#include <stdio.h>

int main () {
    int a[100], n, k, i, j, temp;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    
    scanf("%d", &k);

    // Simple sorting (bubble sort)
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("K-th smallest = %d\n", a[k-1]);

    return 0;
}