//Program to display the fibonacci series till nth term using Recursion
#include <stdio.h>

int fibonacci(int);
int main()

{
    int n;
    printf("Enter the nth term of the Fibonacci Series:");
    scanf("%d",&n);

    fibonacci(n);

    printf("The Fibonacci Series :-\n");
    for(int i=0;i<n;i++) 
    {
        printf("%d ",fibonacci(i));
    }
    return 0;
}

int fibonacci(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else 
    return fibonacci(n-1)+fibonacci(n-2);
}


