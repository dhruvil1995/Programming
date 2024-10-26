#include<stdio.h>
 pr(int num)
{
		int sum=0,orign,remender;
		
		orign=num;
		
	while(num!=0)
		{
			remender=num%10;
			sum=remender+(sum*10);
		num=num/10;
		}
		return orign==sum;
}
main()
{
	int num;
	
	printf("enter number :");
	scanf("%d",&num);
	
	if(pr(num))
	
	{
		printf("%d is palindrom number:\n",num);
	}
	else 
	{
		printf("%d is not palindrom number :\n",num);
	}
}
