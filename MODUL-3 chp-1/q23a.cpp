#include<stdio.h>
main()
{
	int num1,num2,temp;
	printf("enter first number:");
	scanf("%d",&num1);
	printf("enter second number:");
	scanf("%d",&num2);
	printf("number befor swaping :num1=%d,num2=%d\n",num1,num2);
	//swap variable without third variable
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("after swaping:num1=%d,num2=%d\n",num1,num2);
	
	
}
