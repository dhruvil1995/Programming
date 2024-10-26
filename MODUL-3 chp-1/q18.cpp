#include<stdio.h>
main()
{
	float working_hours,hours_rate,annualy_salary;
	printf("Enter working hours in week:");
	scanf("%f",&working_hours);
	printf("Enter working hours rate Rs:");
	scanf("%f",&hours_rate);
	//annualy salary calculation
	annualy_salary=working_hours*hours_rate*52;
	//print annualy salary
	printf("Enter annualy salary RS:%.f",annualy_salary);	
}
