//Program to make a function to slice a string from m to n index 
#include <stdio.h>

char* myslicer(char str[],int m,int n)
{
    char* ptr1=&str[m];
    char* ptr2=&str[n];
    
    str=ptr1;
    str[n]='\0';
    return str;
}

int main()
{
    char str[25];
    int m,n;
    
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    
    printf("Enter the first index:");
    scanf("%d",&m);
    
    printf("Enter the second index:");
    scanf("%d",&n);

    printf("Original string:%s",str);
    printf("Sliced string:%s",myslicer(str,m,n));
    return 0;
}