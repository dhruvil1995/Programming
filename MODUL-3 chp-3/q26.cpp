#include<stdio.h>
main()
{
	int i,n,sum,totalsum=0;
	printf("enter integer");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum=(i*(i+1))/2;
		totalsum=totalsum+sum;
		
	}
	printf("The sum of the series (1) + (1+2) + ... + (1+2+3+...+%d) is: %d\n", n, totalsum);
}
