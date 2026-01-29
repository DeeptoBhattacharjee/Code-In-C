#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);

    printf("Number\tSquare\tCube\n");
    i=1;

    while (i<=n)
    {
        printf("%d\t%d\t%d\n",i,i*i,i*i*i);
        i=i+1;
    }
    
}