//Program to swap two numbers via third variable using Pointers
#include <stdio.h>

int main()
{
    int a,b;
    int *point_a=&a;
    int *point_b=&b;

    int temp;

    printf("Enter the value of a:");
    scanf("%d",point_a);

    printf("Enter the value of b:");
    scanf("%d",point_b);

    printf("a=%d b=%d",*point_a,*point_b);
    printf("\n");

    temp=*point_a;
    *point_a=*point_b;
    *point_b=temp;
    
    printf("After swapping....\n");
    printf("a=%d b=%d",*point_a,*point_b);

    return 0;
}