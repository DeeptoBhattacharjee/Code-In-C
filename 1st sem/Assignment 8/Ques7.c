//Program to check if a string is palindrome or not 
#include <stdio.h>
#include <string.h>

void palindrome(char str[])
{
   char rev[25];
   int len=strlen(str);
   for(int i=0;i<len;i++)
   {
    rev[i]=str[len-i-1];
   }
   rev[len]='\0';

   if(strcmp(str,rev)==0)
   printf("%s is a Palindrome string",str);
   else
   printf("%s is not a Palindrome string",str);
}

int main()
{
    char str[25];
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    palindrome(str);
    return 0;
}