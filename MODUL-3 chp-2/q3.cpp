#include<stdio.h>
main()
{
	int year;
	printf("Enter year:");
	scanf("%d",&year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d lip year\n",year);
		
	}
	else
	{
		printf("%d not lip year\n",year);
		
	}
	
}
