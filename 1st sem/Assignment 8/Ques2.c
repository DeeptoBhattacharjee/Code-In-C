//Program to reverse a string without using library function
#include <stdio.h>

int main()
{
    char word[40];
    printf("Enter a word:");
    fgets(word,sizeof(word),stdin);
    int i,len=0;

    printf("The Original String:-\n");
    printf("%s",word);

    while(word[len]!='\0')
    {
        len++;
    }

    printf("The Reversed String:-");
    for(i=len-1;i>=0;i--)
    {
        printf("%c",word[i]);
    }

    return 0;
}