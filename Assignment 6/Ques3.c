//Program to write a function in C to calculate the factorial of a given number
#include <stdio.h>

int Factorial(int);

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    Factorial(num);

    return 0;
}

int Factorial(int num)
{
    int i,fact=1;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("The Factorial of the number %d is %d",num,fact);
    return 0;
}