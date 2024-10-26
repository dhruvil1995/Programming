#include<stdio.h>
main()
{
	int mark;
	printf("enter marks obtained by student:");
	scanf("%d",&mark);
	if (mark>30 && mark<100)
	{
		printf("student is pass",mark);
		
	}
	else if(mark>100)
	{
		printf("enter marks not valied",mark);
		
	}
	else
	{
		printf(" student is fail",mark);
	}
}
