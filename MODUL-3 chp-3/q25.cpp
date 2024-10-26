#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("enter integer");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum=sum+i*i;
		
	}
	printf("The sum of the series (1*1) + (2*2) + ... + (%d*%d) is: %d\n", n, n, sum);
}
