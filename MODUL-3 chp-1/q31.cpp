#include<stdio.h>
main()
{ 
    float kilometer,meter;
	printf("enter kilometer:");
	scanf("%f",&kilometer);
	//convert kilometer conver in to meter
	meter=1000*kilometer;
	printf("kilometer convert in to meter:%.2f",meter);
	
}
