//Program to calculate the sum and the average of elements in an Array
#include <stdio.h>

int main()
{
    int n,i,sum=0,avg=0;
     
    printf("Enter the number of elements:");
    scanf("%d",&n);

    int arr[n];

    //Input elements in the Array
    printf("Enter the elements in the Array:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter Element %d:",i);
        scanf("%d",&arr[i]);
    }
    
    //Summation of elements in the Array
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    avg=sum/n;//Calculate the average of the elements

    printf("Sum:%d\n",sum);
    printf("Average:%d",avg);
    
    return 0;
}