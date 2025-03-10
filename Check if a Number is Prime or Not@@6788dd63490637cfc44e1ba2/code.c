// Your code here...
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==2){printf("Prime");}
    else if(n%2==0){printf("Not Prime");}
    else if(n%3==0){printf("Not Prime");}
    else if(n%5==0){printf("Not Prime");}
    else if(n%7==0){printf("Not Prime");}
    else{printf("Prime");}return 0;
}