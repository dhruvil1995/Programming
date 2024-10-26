#include<stdio.h>
main()
{
	int choice;
	float num1,num2,result;
	
	do
	{
		printf("\nmenu:\n");
		printf("1.addition:\n");
		printf("2.substraction:\n");
		printf("3.multiplication:\n");
		printf("4.division:\n");
		printf("5.exist:\n");
		printf("enter your choice(1-5):\n");
		scanf("%d",&choice);
		
		if(choice>=1 && choice<=4)
		{
		
		printf("enter first number:");
		scanf("%f",&num1);
		printf("enter second number:");
		scanf("%f",&num2);
	}
	
	switch (choice)
	{
		case 1:
			result=num1+num2;
			printf("result:%.2f+%.2f=%.2f\n",num1,num2,result);
			break;
			
			case 2:
			result=num1-num2;
			printf("result:%.2f+%.2f=%.2f\n",num1,num2,result);
			break;
			
			case 3:
			result=num1*num2;
			printf("result:%.2f+%.2f=%.2f\n",num1,num2,result);
			break;
			
			case 4:
				if(num2!=0)
				{
				
			result=num1/num2;
			printf("result:%.2f+%.2f=%.2f\n",num1,num2,result);
		}
			
			
	
	else
	{
		printf("error!!!!division by zero");
	}
	break;
	case 5:
	printf("Exiting the program.\n");
    break;
    
    default:
    printf("Invalid choice! Please select a valid option.\n");
    break;
}
}
while(choice!=5);

    
}
