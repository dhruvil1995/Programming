#include<stdio.h>
main()
{
	int a,b;
	printf("Enter number1:");
	scanf("%d",&a);
	printf("Enter number2:");
	scanf("%d",&b);
	printf("\nAddition:%d",a+b);
	printf("\nSubstaraction:%d",a-b);
	printf("\nMultiplication:%d",a*b);
	printf("\nDivision:%.2f",(float)a/b);
	printf("\nmodulo:%d",a%b);
	
}
