//Program to print the elements of an array in reverse order
#include <stdio.h>

int main()
{
    int n,i;
    
    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[n];

    //Input elements in the Array
    printf("Enter the elements in the Array:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter Element %d:",i);
        scanf("%d",&arr[i]);
    }

    //Print in normal order
    printf("The elements in normal order:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    //Print in reverse order
    printf("The elements in reverse order:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}


