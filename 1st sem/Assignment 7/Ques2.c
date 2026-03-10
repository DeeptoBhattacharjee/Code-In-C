//Program to add two variables using Pointers
#include <stdio.h>

int main()
{
    int a,b,sum=0;

    int *point_a=&a;
    int *point_b=&b;
    int *point_sum=&sum;

    printf("Enter the value of a:");
    scanf("%d",point_a);
    
    printf("Enter the value of b:");
    scanf("%d",point_b);

    *point_sum=*point_a+*point_b;
    
    printf("The sum = %d",*point_sum);
    

    return 0;
}