#include<stdio.h>
main()
{
	int hight;
	printf("enter person hight in centimeter:");
	scanf("%d",&hight);
	if (hight<=120)
	{
		printf("person hight is short\n",hight);
	}
	else if (hight>120 && hight<=150)
	{
		printf("person hight is average\n",hight);
	}
	else
	{
		printf("person hight is tall\n",hight);
	}
	
}
