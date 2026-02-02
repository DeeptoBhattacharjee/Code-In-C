//Program to check whether the input year is a leap year or not
#include<stdio.h>
void main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);

    if (year%4==0 && year%100!=0)
    printf("%d is a leap year",year);
    
    else
    printf("%d is not a leap year",year);
}