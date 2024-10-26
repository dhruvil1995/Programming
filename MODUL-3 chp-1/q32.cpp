#include<stdio.h>
main()
{
	int sum1,sum2,sum;
	printf("Enter first number:");
	scanf("%d",&sum1);
	printf("Enter second number:");
	scanf("%d",&sum2);
	//sum of two number 
	sum=sum1+sum2;
	printf("Sum of two number:%d",sum);
	//sum<10 is small number,10<sum<99 is medium number,sum>100 is large number
	
	if (sum<10)
	{
		printf("\nSum of two number which is small ",sum);
	}
	else if (10<sum && sum<100)
	{
		printf("\nSum of two number which is medium ",sum);
		
	}
	else 
	{
		printf("\nSum of two number which is large",sum);
	}
	
}
