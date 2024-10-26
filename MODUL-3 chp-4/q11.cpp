#include<stdio.h>
main()
{
	int num[5],i;
	
	printf("enter 5 number :\n");
	for(i=1;i<=5;i++)
	{
	
	printf("number%d:",i);
	scanf("%d",&num[i]);
}
printf("number in reversal form:\n");
for(i=5;i>=1;i--)
{
	printf("%d ",num[i]);
}
	
	printf("\n");
	
	
	
	
}
