//Program to write a function in C to find the maximum and minimum element in the Array
#include <stdio.h>

int MaxMin(int n,int arr[]);

int main()
{
    int n,i;
    printf("Enter the number of elements in the Array:-");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }

    MaxMin(n,arr);

    return 0;
}

int MaxMin(int n,int arr[])
{
    int i,max,min;
    max=min=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        if(arr[i]<min)
        min=arr[i];

    }

    printf("The maximum element in the Array is %d\n",max);
    printf("The minimum element in the Array is %d",min);

    return 0;
}