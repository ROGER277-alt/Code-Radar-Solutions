// Your code here...
#include<stdio.h>
char n;
scanf("%c",&n);
if(n >= 'A' && n <= 'Z'){
    printf("Uppercase");
}else if(n>='a' && n<='z'){
    printf("Lowercase");
}else{printf("not defined");return 0;}