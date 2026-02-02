//Program to check whether a given number is prime or not
#include <stdio.h>

int main()
{
    int n,c,i;
    printf("Enter a number:");
    scanf("%d",&n);

    c=0;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }

    if(c==2)
    printf("%d is a prime no.",n);
    else 
    printf("%d is a not prime no.",n);

    return 0;
}