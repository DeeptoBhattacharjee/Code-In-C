//Program to copy a string to another string without using library function 
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

char* mystrcpy(char target[],char source[])
{
    for(int i=0;i<mystrlen(source);i++)
    {
        target[i]=source[i];
    }
    target[mystrlen(source)]='\0';
    return target;
}
int main()
{
    char source[25];
    char target[25];

    printf("Enter a string:");
    fgets(source,sizeof(source),stdin);

    printf("The Source String:%s",source);
    printf("The Copied String:%s",mystrcpy(target,source));
    return 0;
}