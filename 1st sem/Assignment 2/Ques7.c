//Program to check the validity of triangles via angles input 
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the three angles of a triangle:");
    scanf("%d %d %d",&a,&b,&c);

    if (a+b+c==180 && a>0 && b>0 && c>0)
    printf("The triangle is valid");
    
    else
    printf("The triangle is not valid");
}