//Program to categorise the students division as per their marks 
#include<stdio.h>
void main()
{
    int m1,m2,m3,m4,m5,per;
    printf("Enter the marks in 5 subjects:");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

    per=((m1+m2+m3+m4+m5)/5);
    printf("%d\n",per);

    if (per >= 60)
    printf("First division");

    else if (per >= 50 && per <= 59)
    printf("Second division");

    else if (per >= 40 && per <= 49)
    printf("Third division");

    else
    printf("Fail");
}