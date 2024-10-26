#include<stdio.h>
main()
{
	float num1,num2,result;
	char op;
	printf("Enter first number: ");
    scanf("%f", &num1);
	fflush(stdin);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf("%c", &op);// why gap

    printf("Enter second number: ");
    scanf("%f", &num2);
	
	if (op=='+')
	{
		result=num1+num2;
		printf("%.2f+%.2f=%.2f",num1,num2,result);
	}
	else if(op=='-')
	{
		result=num1-num2;
		printf("%.2f-%.2f=%.2f",num1,num2,result);
	}
	else if (op=='*')
	{
		result=num1*num2;
		printf("%.2f*%.2f=%.2f",num1,num2,result);
	}
	else if(op=='/')
	{
		if(num2==0)
		{
		
		printf("division by zero");
		}
		else 
		{
			result=num1/num2;
			printf("%.2f/%.2f=%.2f",num1,num2,result);
		}
	}
		else if(op=='%')
		{
			if('%'==0)
			{
				printf("division by zero");
			}
			else
			{
			result = (int)num1 % (int)num2;
            printf("%.2f %% %.2f = %.2f", num1, num2, result);
			}
		}
			 else 
			{
				printf("invalid oprator");
			}
		
		
	
	
	
	
	
}
