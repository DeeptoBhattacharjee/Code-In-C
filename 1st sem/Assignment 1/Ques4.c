//Program to swap two user input numbers
#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter the value of C:");
    scanf("%d",&a);
    printf("Enter the value of D:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("Swapping.....");
    printf("C:%d",a);
    printf("D:%d",b);
}