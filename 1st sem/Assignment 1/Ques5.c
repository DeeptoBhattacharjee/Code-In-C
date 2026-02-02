//Program to calculate the Diameter,Circumference,Area of a Circle
#include<stdio.h>
#define PI 3.1415926535

void main()
{
    int rad,circum,dia,area;
    printf("Enter the radius of the circle:");
    scanf("%d",&rad);
    dia=2*rad;
    circum=2*PI*rad;
    area=PI*rad*rad;
    printf("Circumference of Circle:%d",circum);
    printf("Diameter of Circle:%d",dia);
    printf("Area of Circle:%d",area);
}