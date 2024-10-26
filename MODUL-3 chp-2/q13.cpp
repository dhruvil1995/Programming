#include<stdio.h>
main()
{
	int num1,num2,num3,min;
	printf("enter number:");
	scanf("%d %d %d",&num1,&num2,&num3);
	
min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

printf("The minimum number is %d\n",min);

	
	
}
