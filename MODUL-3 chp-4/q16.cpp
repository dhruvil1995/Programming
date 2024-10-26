#include<stdio.h>
main()
{
	
	int i , n[5],sum=0;
	
	printf("enter 5 number :\n");
	for(i=0;i<5;i++)
	{
		printf("enter %d number is :",i);
		scanf("%d",&n[i]);
		
	}

	for(i=0;i<5;i++)
	{
		sum=sum+n[i];
	}
	
	printf("total sum is :%d\n",sum);
}
