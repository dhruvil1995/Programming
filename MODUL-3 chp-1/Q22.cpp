#include<stdio.h>
#include<math.h>
main()
{ 
    float P,R,T,amount,compound_intrest;
	printf("enter principal amount:");
	scanf("%f",&P);
	printf("enter rate of intres:");
	scanf("%f",&R);
	printf("enter time period:");
	scanf("%f",&T);
	amount=P*pow((1+R/100),T);
	compound_intrest=amount-P;
	printf("compound intrest:%.2f",compound_intrest);
}
