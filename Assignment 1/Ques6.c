//Program to convert the cash amount in bank format
#include<stdio.h>
void main()
{
    int amount;

    printf("=== [INPUT] ===");
    printf("\nEnter the amount : ");
    scanf("%d", &amount);

    printf("\n=== [OUTPUT] ===");

    int calculate = amount / 100;
    printf("\n100 x %d = %d", calculate, calculate * 100);
    amount -= calculate * 100;

    calculate = amount / 50;
    printf("\n50  x %d = %d", calculate, calculate * 50);
    amount -= calculate * 50;

    calculate = amount / 10;
    printf("\n10  x %d = %d", calculate, calculate * 10);
    amount -= calculate * 10;

    calculate = amount / 5;
    printf("\n5   x %d = %d", calculate, calculate * 5);
    amount -= calculate * 5;

    calculate = amount / 2;
    printf("\n2   x %d = %d", calculate, calculate * 2);
    amount -= calculate * 2;

    calculate = amount;
    printf("\n1   x %d = %d", calculate, calculate);
    amount -= calculate;
}   