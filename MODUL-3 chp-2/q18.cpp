#include<stdio.h>
main()
{
	float costprice,sellingprice,profitloss;
	
	printf("enter cost price:");
	scanf("%f",&costprice);
	
	printf("enter selling price:");
	scanf("%f",&sellingprice);
	
	profitloss=sellingprice-costprice;
	
	if(profitloss>0)
	{
		printf("profit:%.2f\n",profitloss);
	}
	else if (profitloss < 0) {
        printf("Loss: %.2f\n", -profitloss); 
    } 
	else {
        printf("No Profit No Loss\n");
    }
}
