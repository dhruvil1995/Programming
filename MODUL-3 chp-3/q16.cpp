#include<stdio.h>
main()
{
	int n,i=1,sum=0;
	
 printf("Enter a positive integer: ");
    scanf("%d", &n);
if (n < 1) 
{
        printf("Please enter a positive integer.\n");
	
}
	while(i<=n)
	
	{
		sum=sum+i;
		i++;
	}
	
	printf("sum of natrual number %dis:%d\n",n,sum);

}
