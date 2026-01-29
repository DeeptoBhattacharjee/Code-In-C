//Program to calculate the Simple Interest
#include<stdio.h>
void main()
{
    int prin,rate,time,simple_int;
    printf("Enter the principle,rate,time:");
    scanf("%d %d %d",&prin,&rate,&time);
    simple_int=(prin*rate*time) / 100;
    printf("Simple Interest:%d",simple_int);
}