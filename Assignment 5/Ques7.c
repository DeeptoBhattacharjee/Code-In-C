//Program to delete an element from an unsorted Array from a desired index
#include <stdio.h>

int main()
{
    int n,i,pos;
    
    printf("Enter the number of elements in the Array:");
    scanf("%d",&n);

    int arr[n];

    //Input elements in the Array
    printf("Enter the elements in the Array:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter Element %d:",i);
        scanf("%d",&arr[i]);
    }
    
    printf("Array before deletion...\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("Enter the index for deletion:");
    scanf("%d",&pos);
    
    //Shifting the elements of the array to the left
    for(i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }

    n--;

    printf("Array after deletion...\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}