#include<stdio.h>
main()
{
    int customerId;
    char customerName[15];
    float unitsConsumed, totalAmount;
    
    printf("Enter Customer ID: ");
    scanf("%d", &customerId);
    
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    
    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);
    
    if (unitsConsumed <= 350)
	 {
        totalAmount = unitsConsumed * 1.20;
    } 
	else if
	 (unitsConsumed > 350 && unitsConsumed < 600) 
	 {
        totalAmount = unitsConsumed * 1.50;
    } 
	else if (unitsConsumed >= 600 && unitsConsumed < 800)
	 {
        totalAmount = unitsConsumed * 1.80;
    } 
	else
	 {
        totalAmount = unitsConsumed * 2.00;
    }
    
    printf("\nElectricity Bill\n");
    
    printf("Customer ID: %d\n", customerId);
    
    printf("Customer Name: %s\n", customerName);
    
    printf("Units Consumed: %.2f\n", unitsConsumed);
    
    printf("Total Amount to be Paid: %.2f\n", totalAmount);
}
