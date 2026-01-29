//Program to write a function in C to sort the elements of the Array in descending order
#include <stdio.h>

int Sort(int n,int arr[]);

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

    Sort(n,arr);

    return 0;
}

int Sort(int n,int arr[])
{
    int i,j,t,x;
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