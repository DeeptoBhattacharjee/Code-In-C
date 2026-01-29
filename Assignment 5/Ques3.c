//Program to find the maximum and minimum element in the Array
#include <stdio.h>

int main()
{
    int n,i,max,min;

    printf("Enter the numbers of elements:");
    scanf("%d",&n);

    int arr[n];

    //Input elements in the Array
    printf("Enter the elements in the Array:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter Element %d:",i);
        scanf("%d",&arr[i]);
    }

    max=min=arr[0];

    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];//Get the maximum element
        if(arr[i]<min)
        min=arr[i];//Get the minimum element
    }

    printf("Maximum element:%d\n",max);
    printf("Minimum element:%d",min);
    
    return 0;
}