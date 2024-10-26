#include<stdio.h>
main()
{
	float salary,premium;
	printf("person annual salary:");
	scanf("%f",&salary);
	if("salary<10000")
	{
		premium=salary*0.03;
	}
	else if("salary>=10000 && salary<50000")
	{
		premium=salary*0.05;
	}
	else 
	{
		premium=salary*0.07;
	}
	printf("person annul base premium%.2f",premium);
}
