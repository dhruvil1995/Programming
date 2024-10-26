#include<stdio.h>
main()
{
	int n,arm=0,c,r;
	
	printf("enter number:");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r=n%10;
		arm=(r*r*r)+arm;
		n=n/10;
	}
	if (c==arm)
	{
		printf("armstong number");
	}
	else
	{
		printf("not");
		
	}
}
