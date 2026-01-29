//Program to check the divisibilty of a number by 5 & 11
#include<stdio.h>
void main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);

    if (a%5==0 && a%11==0)
    printf("%d is divisble by 5 and 11",a);
    
    else
    printf("%d is not divisble by 5 and 11",a);
}