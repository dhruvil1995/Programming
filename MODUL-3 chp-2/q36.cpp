#include<stdio.h>
main()
{
	float unit,bill,total_bill;
	printf("enter total unit consumed:");
	scanf("%f",&unit);
	
	if(unit<=50)
	{
	bill=unit*0.50;
     }
	else if(unit<=150)
	{
		bill=(50*0.50)+((unit-50)*0.75);
		
	}
	else if (unit<=250)
	{
		bill=(50*0.50)+(100*0.75)+((unit-150)*1.2);
	}
	else 
	{
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((unit - 250) * 1.50);
    }
    
    total_bill=bill+(bill*0.20);
    
    printf("total electrical bill:RS.%.2f\n",total_bill);
}
