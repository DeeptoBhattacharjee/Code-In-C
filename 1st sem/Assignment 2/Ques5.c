//Program to find maximum of three numbers

#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    printf("Maximum no. is %d",a);
    else
    {
        if (b>c && b>a)
        printf("Maximum no. is %d",b);
        else
        printf("Maximum no. is %d",c);
        
    }

}