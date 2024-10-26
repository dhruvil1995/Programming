#include<stdio.h>
main()
{
	int i,n[5],j,temp;
	
	printf("enter 5 number:\n");
	for(i=0;i<=5;i++)
	{
		printf("number %d is :",i);
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(n[i]>n[j])
			{
			
			temp=n[i];
			n[i]=n[j];
			n[j]=temp;
		}
		}
	}
	printf("number in assending order is :\n");
	for(i=0;i<5;i++)
	{
	
	printf("%d",n[i]);
}
printf("\n");
}
