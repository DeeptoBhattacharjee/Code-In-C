#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter the no. of elements:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements in the Array[In sorted order]:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the Element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    int key;
    printf("Enter the element to be searched:");
    scanf("%d",&key);

    int low=0,high=n-1,mid;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            printf("Element found at index %d\n",mid);
            break;
        }
        else if(arr[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return 0;
}