//Program to check the no. is positive or negative

#include<stdio.h>
void main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    
    if (x>0)
    printf("The no. is Positive");

    else
    {
        if(x==0)
        printf("The no. is 0");

        else
        printf("The no. is negative");

    }
}