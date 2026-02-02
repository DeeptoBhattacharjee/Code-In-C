//Program to calculate the sum and average of the first 10 natural numbers
#include <stdio.h>

int main()
{
    int n,i,s=0,avg=0;

    for(i=1;i<=10;i++)
    {
        printf("Enter number %d:",i);
        scanf("%d",&n);
        s=s+n;
    }

    avg=s/10;

    printf("Sum:%d",s);
    printf("\nAverage:%d",avg);

    return 0;
}