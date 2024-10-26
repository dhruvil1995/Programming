#include<stdio.h>
int factorial(int n)
{
	if(n==1)
	return 1;
	return n*factorial(n-1);
	
}
main()
{
	int n,fac;
	printf("enter number:");
	scanf("%d",&n);
	
	fac=factorial(n);
	
	printf("%d",fac);
}
