//Program to make a function to calculate the length of a string with library function
#include <stdio.h>

int mystrlen(char word[])
{
    int i=0;
    while (word[i]!='\0' && word[i]!='\n')
    {
        i++;
    }
    return i;
}

int main()
{
    char word[25];
    printf("Enter a word:");
    fgets(word,sizeof(word),stdin);

    printf("The length is %d",mystrlen(word));

    return 0;
}