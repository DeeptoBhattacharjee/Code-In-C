//Program to add elements in an array using Pointers
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in Array:");
    scanf("%d",&n);

    int arr[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter element %d:",i + 1);
        scanf("%d",arr + i);
    }

    printf("The elements of the Array are:-\n");
    for (int i=0;i<n;i++)
    {
        printf("%d ",*(arr + i));
    }

    return 0;
}