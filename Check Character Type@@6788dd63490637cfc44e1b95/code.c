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
    }else if((n=='0') || (n=='1') ||(n=='2') ||(n=='3') ||(n=='4') || (n=='5') ||(n=='6') || (n=='7') || (n=='8') ||(n=='9'){
        printf("Digit");
    }else{printf("Special Character");}return 0;
}