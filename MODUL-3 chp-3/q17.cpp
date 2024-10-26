#include<stdio.h>
main()
{
	int i=1,n,evencount=0,oddcount=0;
	
	printf("enter 5 number :\n");
	while (i<=5)
	{
		printf("number%d:",i++);
		scanf("%d",&n);
		

		if (n % 2==0)
		{
		  
		  evencount++;
			
		}
		else 
		{
			oddcount++;
		}
	}
		
		{
			printf("even count is %d\n",evencount);
			printf("odd count is %d\n",oddcount);
		}
}
