//Program to calculate the gross salary of an employee
#include<stdio.h>
void main()
{
    int basic,da,hra,gross;
    printf("Enter the basic salary of the employee:");
    scanf("%d",&basic);
    if (basic>0)
    {
        if (basic < 1500)
        {
            hra=(10.0/100)*basic;
            da=(90.0/100)*basic;
            gross=hra+da+basic;
            printf("Gross salary of the employee:%d",gross);
        }

        else 
        {
            hra=500;
            da=(98.0/100)*basic;
            gross=hra+da+basic;
            printf("Gross salary of the employee:%d",gross);
        }

    }

    else
    printf("Invalid input");
}