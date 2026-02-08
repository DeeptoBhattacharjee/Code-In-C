//Program to segragate the odd elements and even elements in different Arrays
#include <stdio.h>

int main()
{
    int n,i,e=0,o=0;

    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[n],even[n],odd[n];

    printf("Enter the elements in the Array:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter Element %d:",i);
        scanf("%d",&arr[i]);

        if(arr[i]%2==0)
        even[e++]=arr[i];//Inserting the even elements in the even[n] array
        else
        odd[o++]=arr[i];//Inserting the odd elements in the odd[n] array
    }

    printf("The even elements in the array:\n");
    for(i=0;i<e;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\n");
    
    printf("The odd elements in the array:\n");
    for(i=0;i<o;i++)
    {
        printf("%d ",odd[i]);
    }

    return 0;
}