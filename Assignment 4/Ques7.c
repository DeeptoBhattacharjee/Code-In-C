//Program to display the factors of a number
#include <stdio.h>

int main()
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    
    printf("The factors of %d are:-\n",n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        printf("%d\n",i);
    }
    return 0;
}