#include<stdio.h>
main()
{    
    float day,month;
	printf("enter day:");
	scanf("%f",&day);
	//convert day in to month
	month=day/30;
	printf("month:%.2f",month);
	
}
