#include<stdio.h>
main()
{
	//7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
	int n,r;
	printf("enter number:");
	scanf("%d",&n);
		{
		printf("reversal number is:");
	}
	while(n>0)
	
	
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
}
