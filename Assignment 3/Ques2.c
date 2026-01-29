//Program to display all the odd integers from 1 to a given range(input) 
#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a positive integer:");
    scanf("%d",&n);

    printf("The odd no. are:-\n");
    i=1;

    while(i<=n)
    {
        if (i%2!=0)
        printf("%d\n",i);
        i++;
    }
}