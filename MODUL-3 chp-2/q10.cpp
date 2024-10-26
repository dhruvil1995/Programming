#include<stdio.h>
main()
{
	int negative,positive,zero,num;
	printf("enter number:");
	scanf("%d",&num);
	if(num>0)
	{
		printf("enter number is positive.");
		
	}
	else if (num==0)
	{
		printf("enter number is zero.");
	}
	else
	{
		printf("enter numbe is negative.");
		
	}
}
