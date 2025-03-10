// Your code here...
#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    if((n=='a') || (n=='e') || (n=='i') || (n=='o') || (n=='u') ||(n=='A') ||(n=='E')  ||(n=='I') ||(n=='O')  ||(n=='U')){
        printf("Vowel");
    }else  if(n>='a' && n<='z'){
        printf("Consonant");
    }else if(9>=n<=0){
        printf("Digit");
    }else{printf("Special Character");}return 0;
}