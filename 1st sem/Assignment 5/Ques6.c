//Program to insert an element to an unsorted Array to a desired index
#include <stdio.h>

int main()
{
    int n,i,pos,value;
    
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
    
    printf("Array before insertion...\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("Enter the index for insertion:");
    scanf("%d",&pos);

    printf("Enter the value to insert:");
    scanf("%d",&value);

    //Shifting the elements of the array to the right
    for(i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }

    arr[pos]=value;//Inserting the element to the desired index
    n++;

    printf("Array after insertion...\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}