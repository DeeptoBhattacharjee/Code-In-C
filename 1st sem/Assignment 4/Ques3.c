//Program to find the sum of natural numbers till nth term
#include <stdio.h>

int main()
{
    int n,i,s=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
        s=s+i;
    } 

    printf("Sum:%d",s);
    return 0;
}