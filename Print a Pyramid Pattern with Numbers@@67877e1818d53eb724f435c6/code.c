// Your code here...
#include<stdio.h>
int main()
{
    int N,i,j,k;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int k=1;k<N;k++){
            printf(" ");
        }
        for(int j=1;j<(2*i)-1;j++){
            printf("%d",k);
        }printf("\n");
    }return 0;
}