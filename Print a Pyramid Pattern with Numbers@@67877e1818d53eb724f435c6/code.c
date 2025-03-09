// Your code here...
#include<stdio.h>
int main()
{
    int N,i,k,j;
    scanf("%d",&N);
    for(i = 1; i <= N; i++) {
        for(j = i; j < N; j++) {
            printf(" ");
        }
        for(k = 1; k <= (2*i - 1); k++) {
            printf("%d ", i);
        }
        printf("\n");
    }return 0;}