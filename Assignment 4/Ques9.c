//Program to check whether a number is a perfect number or not
#include <stdio.h>

int main()
{
    int n,i,s;
    printf("Enter a number:");
    scanf("%d",&n);
    
    s=0;

    for(i=1;i<n;i++)
    {
        if(n%i==0)
        s=s+i;
    }

    if(s==n)
    printf("%d is a perfect number",n);
    else
    printf("%d is not a perfect number",n);

    return 0;
}