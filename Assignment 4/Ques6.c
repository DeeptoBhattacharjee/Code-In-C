//Program to find the factorial of a number
#include <stdio.h>

int main()
{
    int n,i,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    printf("%d!=%d",n,fact);

    return 0;
}