#include<stdio.h>
main()
{
	int n[5],i;
	printf("enter 5 number is:\n");
	for(i=1;i<=5;i++)
	{
		printf("number %d:",i);
		scanf("%d",&n[i]);
	}
	
	printf("enter number is odd or even:\n");
	for(i=1;i<=5;i++)
	{
		if(n[i]%2==0)
		{
			printf("number %d is even:\n",n[i]);
		}
		else
		{
			printf("number %d is odd:\n",n[i]);
		}
	}
}
