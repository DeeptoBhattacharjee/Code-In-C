//Program to calculate the factorial of a number using Recursion
#include <stdio.h>
int factorial(int);
int main()
{
    int num,fact;
    printf("Enter a number:");
    scanf("%d",&num);
    fact=factorial(num);
    
    printf("The factorial of %d is %d",num,fact);

    return 0;
}

int factorial(int num)
{
    if (num==0 || num==1)
    return 1;
    else
    return (num * factorial(num-1));
}