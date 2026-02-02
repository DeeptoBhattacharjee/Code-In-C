//Program to display a number its square and cube in a tabular format
#include<stdio.h>
void main()
{
    int n,i=1;
    printf("Enter a number:");
    scanf("%d",&n);

    printf("Number\tSquare\tCube\n");

    while (i<=n)
    {
        printf("%d\t%d\t%d\n",i,i*i,i*i*i);
        i=i+1;
    }
    
}