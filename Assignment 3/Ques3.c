//Program to input a number and print its table till 10
#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);

    i=1;

    while(i<=10)
    {
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }
}