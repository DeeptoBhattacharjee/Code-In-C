//Program to convert No. of Days to Years,Months and Days
#include<stdio.h>
void main()
{
    int days,mons,rem_days,yrs,days_left;
    printf("Enter the no. of days:");
    scanf("%d",&days);
    yrs=days/365;
    rem_days=days%365;
    mons=rem_days/30;
    days_left=rem_days%30;
    printf("Years-%d ",yrs);
    printf("Months-%d ",mons);
    printf("Days-%d",days_left);
}