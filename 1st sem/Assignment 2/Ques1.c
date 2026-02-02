//Program to find the maximum of two numbers

#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    if (a>b)
    printf("Maximum is %d",a);
    else
    printf("Maximum is %d",b); 
}