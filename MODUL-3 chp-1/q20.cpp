#include<stdio.h>
main()
{   int s,remaining_salary,insurance_premium,loan_installment;
	printf("enter monthly sellary:");
	scanf("%d",&s);
	//deduct 10% insurance premium and 10% loan installment 
	insurance_premium=s*0.10;
	loan_installment=s*0.10;
	remaining_salary=s-insurance_premium-loan_installment;
	
	printf("\nafter deduction remaining salary:%d",remaining_salary);
	
	
}
