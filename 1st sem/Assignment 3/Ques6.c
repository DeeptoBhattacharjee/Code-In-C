//Program to calculate the sum of digits of a number(input)
#include<stdio.h>
void main()
{
    int n,i,d,s=0;
    printf("Enter a number:");
    scanf("%d",&n);

    i=1;

    while(n!=0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    
    printf("The sum of digits:%d",s);
}