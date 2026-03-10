//Program to find the address of the sum and average of two numbers using Pointers
#include <stdio.h>

int* sum(int,int);
float* average(int,int);

int* sum(int a,int b)
{
    int sum=a+b;
    printf("The sum of the numbers is %d\n",sum);
    int* point_sum=&sum;
    return point_sum; 
} 

float* average(int a,int b)
{
    float avg=(a+b)/2.0;
    printf("The average of the numbers is %f\n",avg);
    float* point_avg=&avg;
    return point_avg;
}

int main()
{
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);

    printf("Enter the value of b:");
    scanf("%d",&b);

    int* ptr1;
    float* ptr2;

    ptr1= sum(a,b);
    ptr2= average(a,b);

    printf("The address of sum is %p\n",ptr1);
    printf("The address of avg is %p",ptr2);
    
    return 0;
}