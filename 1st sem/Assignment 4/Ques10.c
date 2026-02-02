//Program to check whether a three digit number is armstrong or not
#include <stdio.h>

int main()
{
    int i,d,s,temp,n;
    printf("Enter a three digit number:");
    scanf("%d",&n);

    s=0;
    temp=n;

    while(n!=0)
    {
        d=n%10;
        s=s+(d*d*d);
        n=n/10;
    }

    if(s==temp)
    printf("%d is an armstrong number",temp);
    else 
    printf("%d is not an armstrong number",temp);

    return 0;
}