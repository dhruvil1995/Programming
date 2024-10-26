#include<stdio.h>
main()
{
	int n,first,last;
	printf("enter number:");
	scanf("%d",&n);
	last=n%10;
	while(n>0)
	{
	
		first=n;
		n=n/10;
	}
	printf("sum of first and laste sum:%d",first + last);
}
