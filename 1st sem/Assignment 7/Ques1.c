//Program to find the address of a variable using Pointers 
#include <stdio.h>

int main()
{

    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);

    int *p = &a;

    printf("a = %d\n",a);
    printf("&a = %p\n",&a);
    printf("*p = %d\n",*p);
    printf("p = %p",p);

    return 0;
}