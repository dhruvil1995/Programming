#include<stdio.h>
main()
{
	float year,day,month;
	printf("enter year:");
	scanf("%f",&year);
	//convert year in to day and month
	day=year*365;
	month=day/30;
	printf("\nday:%.2f",day);
	printf("\nmonth :%.2f",month);
	
}
