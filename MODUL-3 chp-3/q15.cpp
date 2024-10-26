#include<stdio.h>
main()
{
	int n,sum=0,i=1;
	
	printf("enter 10 number is:\n");
	
	while (i<=10)
	{
		printf("number%d:",i);
	    scanf("%d", &n);
	    sum=sum+n;
	    i++;
	}
	printf("The sum of the 10 numbers is: %d\n", sum);
}

