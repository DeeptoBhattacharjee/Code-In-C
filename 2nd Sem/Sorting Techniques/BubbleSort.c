#include <stdio.h>

int main()
{
    int n,x,i,j,t;
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
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }

    printf("Elements after ascending sorting...\n");
    for(x=0;x<n;x++)
    {
        printf("%d ",arr[x]);
    }
    return 0;
}