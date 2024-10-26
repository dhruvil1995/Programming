#include<stdio.h>
main()
{
	int i,n,fac=1;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("%d\n",fac);
}
