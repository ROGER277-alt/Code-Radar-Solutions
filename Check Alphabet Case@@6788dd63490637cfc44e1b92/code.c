// Your code here...
#include<stdio.h>
int main()
{char n;
scanf("%c",&n);
if(n >= 'A' && n <= 'Z'){
    printf("Uppercase");
}else if(n>='a' && n<='z'){
    printf("Lowercase");
}else{printf("Not an alphabet");}return 0;}