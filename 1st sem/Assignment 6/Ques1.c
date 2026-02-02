//Program to write a function in C to check if a number is Prime or not
#include <stdio.h>

int Prime(int);//Function Prototype

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);

    Prime(num);//Function Call
    
    return 0;
}

int Prime(int num)
{
int c=0,i;
for(i=1;i<=num;i++)
{
    if(num%i==0)
    c++;

}
if(c==2)
printf("%d is a Prime number",num);
else
printf("%d is a not Prime number",num);
return 0;

}