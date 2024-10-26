#include<stdio.h>
main()
{   
    float f,Celsius;
	printf("enter temprature in fehrenheit:");
	scanf("%f",&f);
	// convert formula for fehrenheit to celsius
	Celsius=(f-32)*5/9;
	printf("\ntemprature in celsius:%.2f",Celsius);
	
}
