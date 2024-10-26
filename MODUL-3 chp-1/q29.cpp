#include<stdio.h>
main()
{
	int min,second,hours;
	printf("enter minute:");
	scanf("%d",&min);
	//convert minute in to seconds and hours
	second=min*60;
	hours=min/60;
	printf("\nsecond:%d",second);
	printf("\nhours:%d",hours);
}
