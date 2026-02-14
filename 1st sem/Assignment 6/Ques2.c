//Program to write a function in C to Print the Multiplication Table of a given number
#include <stdio.h>

int Table(int);

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    Table(num);

    return 0;
}

int Table(int num)
{
    int i;
    printf("The Multiplication Table for %d:-\n",num);
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}