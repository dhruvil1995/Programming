#include<stdio.h>
main()
{  
    float total,avg	,expens;
    int i;
	printf("enter 5 expense:\n");
	
	for(i=1;i<=5;i++)
	{
		printf("expense%d:",i);
		scanf("%f",&expens);
		total+=expens;
		
	}
	avg=total/5;
	
	printf("average expense:%.2f\n",avg);
	
}
