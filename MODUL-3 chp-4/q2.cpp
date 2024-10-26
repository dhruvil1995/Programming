#include<stdio.h>
main()
{
	float num1,num2,resul;
	int choice;
	//display functon
	printf("menu list:\n");
	printf("1.addition:");
	printf("2.substraction1:\n");
	printf("3.multiplication:\n");
	printf("4.division:\n");
	//selection function
	printf("enter your choice(1-5):");
	scanf("%d",&choice);
	
	
	if (choice>=1 && choice<=4)
	{
	
	printf("enter number one :");
	scanf("%f",&num1);
	
	printf("enter seconf number:");
	scanf("%f",&num2);
}

switch (choice)
{


	case 1:
		resul=num1+num2;
		printf("result:%.2f+%.2f=%.2f\n",num1,num2,resul);
		break;
		
		case 2:
		resul=num1-num2;
		printf("result:%.2f-%.2f=%.2f\n",num1,num2,resul);
		break;
		
		case 3:
		resul=num1*num2;
		printf("result:%.2f*%.2f=%.2f\n",num1,num2,resul);
		break;
		
		case 4:
			
			if (num2!=0)
			{
			
		resul=num1/num2;
		printf("result:%.2f/%.2f=%.2f\n",num1,num2,resul);
		break;
	}
	else
	{
		printf("Error: Division by zero is not allowed.\n");
	}
		break;
		
		 default:
                printf("Invalid choice. Please try again.\n");
		
}while (choice != 5);
	
	
}
