//Program to display the digits of a number from left to right and from right to left pattern
#include<stdio.h>
void main()
{
    int n,i,d1,d2,s=0;
    printf("Enter a number:");
    scanf("%d",&n);

    i=1;

    printf("Right to Left\n");
    while(n!=0)
    {
        d1=n%10;
        s=s*10+d1;
        printf("%d ",d1);
        n=n/10;
    }
    printf("\n");
    
    printf("Left to Right\n");
    while(s!=0)
    {
        d2=s%10;
        printf("%d ",d2);
        s=s/10;
    }
}