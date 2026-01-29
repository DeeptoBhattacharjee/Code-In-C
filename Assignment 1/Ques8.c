//Program to convert Temperature from Centigrade to Fahrenheit
#include<stdio.h>
void main()
{
    float cent,fahr;
    printf("Enter the temperature in Centigrade:");
    scanf("%f",&cent);
    fahr=(cent*(9.0/5))+32;
    printf("Temperature in Fahrenheit:%f",fahr);
}