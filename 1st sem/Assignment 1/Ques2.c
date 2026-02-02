//Program to perform Arithmetic operations of two numbers
#include<stdio.h>
void main()
{
    int a,b,sum,diff,pro,quo,rem;
    printf("Enter the numbers:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    pro=a*b;
    quo=a/b;
    rem=a%b;
    printf("Sum =%d\n",sum);
    printf("Difference =%d\n",diff);
    printf("Product =%d\n",pro);
    printf("Quotient =%d\n",quo);
    printf("Remainder =%d",rem);

}