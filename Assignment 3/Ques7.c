//Program to find whether a number(input) is a palindrome or not
#include<stdio.h>
void main()
{
    int n,i,d,s=0,temp;
    printf("Enter a number:");
    scanf("%d",&n);

    i=1;
    temp=n;

    while(n!=0)
    {
        d=n%10;
        s=s*10+d;
        n=n/10;
    }

    if (s==temp)
    printf("%d is a palindrome no.",temp);
    else
    printf("%d is a not palindrome no.",temp);
}