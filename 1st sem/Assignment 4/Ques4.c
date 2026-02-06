//Program to calculate the sum and average of the first 10 natural numbers
#include <stdio.h>

int main()
{
    int i,s=0,avg=0;

    for(i=1;i<=10;i++)
    {
        s=s+i;
    }

    avg=s/10;

    printf("Sum:%d",s);
    printf("\nAverage:%d",avg);

    return 0;
}