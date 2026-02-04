//Program to display the absolute value of the number

#include<stdio.h>
void main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if (x<0)
    {
        x=-x;
        printf("The absolute value is %d",x);
    }
    else
    {
        printf("The absolute value is %d",x);
    }
             
}