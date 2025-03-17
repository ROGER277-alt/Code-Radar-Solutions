#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char n[100];
   scanf("%s",&n);
   int len = strlen(n);
   for(int i=0;i<len/2;i++){
    char temp = n[i];
    n[i]=n[len-i-1];
    n[len-i-1]=temp;
   }
   printf("%s\n",n);
   return 0;
}
