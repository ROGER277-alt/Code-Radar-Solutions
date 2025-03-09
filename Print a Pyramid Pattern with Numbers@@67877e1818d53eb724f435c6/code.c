// Your code here...
#include<stdio.h>
int main()
{
    int N,i,k,j;
    scanf("%d",&N);
    for(i = 1; i <= n; i++) {
        // Print spaces for the left part of the pyramid
        for(j = i; j < n; j++) {
            printf(" ");
        }
        
        // Print numbers for the pyramid's actual body
        for(k = 1; k <= (2*i - 1); k++) {
            printf("%d", k);
        }
        
        // Move to the next line after each row
        printf("\n");
    }return 0;}