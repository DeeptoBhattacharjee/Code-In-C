//Program to find the Perimeter and Area of a Rectangle
#include<stdio.h>
void main()
{
    int l,b,p,a;
    printf("Enter the length and breadth:");
    scanf("%d %d",&l,&b);
    p=2*(l+b);
    a=l*b;
    printf("Perimeter =%d\n",p);
    printf("Area =%d",a);

}