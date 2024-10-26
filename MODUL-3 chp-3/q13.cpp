#include<stdio.h>
main()
{
	int n,fac=1,i;
	//calculate the Factorial of a Given Number using while loop
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	printf("factorial number of %d is:",n);
	{
	
	printf("%d\n",fac);
    }
}

