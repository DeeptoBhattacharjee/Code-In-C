//Program to calculate the factorial of a number
#include<stdio.h>
void main()
{
    int n,i,fact;
    printf("Enter a number:");
    scanf("%d",&n);

    fact=1;
    i=1;

    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("The Factorial :- %d! = %d",n,fact);
}