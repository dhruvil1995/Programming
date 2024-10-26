#include<stdio.h>
main()
{
	int num;
	printf("enter integer number:");
	scanf("%d",&num);
	printf("first three power of %d are:\n",num);

	
	printf("%d^1 = %d\n", num, num);
    printf("%d^2 = %d\n", num, num * num);
    printf("%d^3 = %d\n", num, num * num * num);
}
