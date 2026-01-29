//Program to check if a number is even or odd

#include<stdio.h>
void main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if (x%2==0)
    printf("The no. is even");
    else
    printf("The no. is odd");
}