#include<stdio.h>
main()
{
	int i,n[10],oddcount=0,evencount=0,evensum=0,oddsum=0;

	printf("enter 10 number:\n");
	
	for (i=1;i<=10;i++)
	{
	
	printf("number%d:",i);
	scanf("%d",&n[i]);
	}
	//Process the numbers to find even and odd counts and sums
	for (i=1;i<=10;i++)
    {

	if (n[i] % 2 == 0)
	{
		evencount++;
		evensum=evensum+n[i];
	}
	else
	{
	//	printf("enter number is odd\n");
		oddcount++;
		oddsum=oddsum+n[i];
	}
}
	{
		printf("even num count:%d\n",evencount);		
		printf("odd num count:%d\n",oddcount);	
		printf("odd sum:%d\n",oddsum);
     	printf("odd count:%d\n",evensum);
	}


  

}
