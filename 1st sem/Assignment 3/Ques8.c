//Program to convert the digits in string format and dislpay
#include<stdio.h>
void main()
{
    int n,d,i,s=0;
    printf("Enter a number:");
    scanf("%d",&n);

    i=1;

    while(n!=0)
    {
       s=s*10+(n%10);
       n=n/10; 
    }

    while(s!=0)
    {
        d=s%10;

        switch(d)
        {
            case 0:printf("ZERO\t");break;        
            case 1:printf("ONE\t");break;        
            case 2:printf("TWO\t");break;        
            case 3:printf("THREE\t");break;        
            case 4:printf("FOUR\t");break;        
            case 5:printf("FIVE\t");break;        
            case 6:printf("SIX\t");break;        
            case 7:printf("SEVEN\t");break;        
            case 8:printf("EIGHT\t");break;        
            case 9:printf("NINE\t");break;        
        
        }
        s=s/10;
    }


}