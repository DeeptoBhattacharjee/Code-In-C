#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements in the Array:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the Element %d:",i+1);
        scanf("%d",&arr[i]);
    }

    int key;
    printf("Enter the element to be searched:");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("Element found at index %d\n",i);
            break;
        }
    }
    return 0;
}