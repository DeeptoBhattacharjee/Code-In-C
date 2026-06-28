#include <stdio.h>

int main()
{
    int n,x,i,j,temp,min;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the elements in the Array:\n");
    for(x=0;x<n;x++)
    {
        printf("Enter Element %d:",x+1);
        scanf("%d",&arr[x]);
    }

    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }

        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

    printf("Elements after ascending sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}