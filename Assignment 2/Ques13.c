//Program to calculate the energy consumed by an user
#include<stdio.h>
void main()
{
    int units,energy,fuel_charge,govt_tax,total;
    printf("Enter the units consumed:");
    scanf("%d",&units);
    
    if (units <= 50)
    energy=units*0.5;

    else if (units > 50 && units <= 150)
    energy=(50*0.5)+(units-50)*0.75;

    else if (units > 150 && units <=250)
    energy=(50*0.5)+(100*0.75)+(units-150)*1.20;

    else
    energy=(50*0.5)+(100*0.75)+(100*1.20)+(units-250)*1.50;

    fuel_charge=0.2*energy;
    govt_tax=0.1*energy;
    total=energy+fuel_charge+govt_tax;

    printf("Total Bill:%d",total);
}