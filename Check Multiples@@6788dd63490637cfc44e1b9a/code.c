// Your code here...
#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d %d",&i,&j);
    if((i%j==0) || (j%i==0)){printf("Yes");}
    else{printf("No");}return 0;
}