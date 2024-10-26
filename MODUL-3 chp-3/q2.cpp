#include<stdio.h>
main()
{
	//WAP to accept 5 numbers from user and display all numbers
	int n[5],i;
	
	printf("enter 5 number :\n");
	
	for (i=1;i<=5;i++)
	{
		printf("number %d:",i);
		scanf("%d",&n[i]);
	}
	
	
		
		printf("display user enter 5 number is :\n");
		
	
	for(i=1;i<=5;i++)
	{
		printf("%d\n",n[i]);
	}
	
	
	
}
