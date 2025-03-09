// Your code here...
#include<stdio.h>
int main()
{
    int N,i,k,j;
    scanf("%d",&N);
    for( i=1;i<=N;i++){
        for( k=i;k<N;k++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            printf("%d ",j);
        }printf("\n");
    }return 0;
}