// Your code here...
#include<stdio.h>
int main()
{
    int i,j,k;
    scanf("%d %d %d",&i,&j,&k);
    if(i==j && j==k && i==k){printf("Equilateral");}
    else if(i!=j && j!=k  &&i!=k){printf("Scalene");}
    else{printf("Isoceles");}return 0;

}