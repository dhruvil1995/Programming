#include<stdio.h>
main()
{
	int n,i;
	
	printf("enter number to printf its multiplication  tabel:");
	scanf("%d",&n);
	{
		printf("multiplication tabel %d is :\n",n);
	}
	
	for (i=1;i<=10;i++)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}
	
}
