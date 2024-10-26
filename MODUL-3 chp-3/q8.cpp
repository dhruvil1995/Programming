#include<stdio.h>
main()
{
	int n,r,l=0;
	
	printf("enter number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r>l)
		l=r;
		n=n/10;
	}
	{
	
	printf("largerst number is:%d",l);
}
}
