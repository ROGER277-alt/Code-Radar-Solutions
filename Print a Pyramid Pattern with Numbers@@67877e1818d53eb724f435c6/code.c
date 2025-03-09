// Your code here...
#include<stdio.h>
int main()
{
    int N,i,k,j;
    scanf("%d",&N);
    for(i = 1; i <= n; i++) {
        for(j = i; j < n; j++) {
            printf(" ");
        }
        for(k = 1; k <= (2*i - 1); k++) {
            printf("%d", k);
        }
        printf("\n");
    }return 0;}