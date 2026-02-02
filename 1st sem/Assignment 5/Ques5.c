//Program to arrange the elements of an Array in descending order using Bubble sort
#include <stdio.h>

int main()
{
    int n,x,i,j,t;

    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[n];

    //Input elements in the Array
    printf("Enter the elements in the Array:\n");
    for(x=0;x<n;x++)
    {
        printf("Enter Element %d:",x);
        scanf("%d",&arr[x]);
    }

    //Bubble sorting the elements in descending order
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }

    printf("Elements after sorting...\n");
    for(x=0;x<n;x++)
    {
        printf("%d ",arr[x]);
    }

    return 0;
}