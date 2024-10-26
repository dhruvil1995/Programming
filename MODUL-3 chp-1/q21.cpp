#include<stdio.h>
main()
{
	int a,b,temp;
	
	printf("enter two number:");
	printf("number 1:");
	scanf("%d",&a);
	printf("number 2:");
	scanf("%d",&b);
	 //swap using third variable
	 temp=a;
	 a=b;
	 b=temp;
	 
	 printf("after swapping using third variable:\n");
	 printf("number 1:%d\n",a);
	 printf("Number 2: %d\n", b);
	 
	 // Swap back to original values for the next method
    temp = a;
    a = b;
    b = temp;

    // Swap without using a third variable
    a = a + b; 
    b = a - b; 
    a = a - b; 

    printf("After swapping (without using third variable):\n");
    printf("Number 1: %d\n", a);
    printf("Number 2: %d\n",b);
}
