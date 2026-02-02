//Program to find the smallest of the three numbers input by user
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the three no.:");
    scanf("%d %d %d",&a,&b,&c);
    if (a<b && a<c)
    printf("%d is the smallest no.",a);

    else if (b<a && b<c)
    printf("%d is the smallest no.",b);
    
    else
    printf("%d is the smallest no.",c);
}