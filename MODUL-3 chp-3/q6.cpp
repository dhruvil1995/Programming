
#include<stdio.h>
main()
{
	int n,i,a=-1,b=1,c;
	printf("enter number:");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
		c=a+b;//-1+1=0=c
		printf("%d\n",c);
		a=b;//a=1
		b=c;//b=0  a+b=c=1+0=1=c
		//a=0 b=1 0+1=1 a=1 b=1 c=2
		//a=1 b=2 c=3
		//a=2 b=3 // c=5
		
		
	}
	
	
}
