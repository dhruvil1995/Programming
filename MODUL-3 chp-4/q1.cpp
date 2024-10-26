#include<stdio.h>

findmax()

{  int size,max,n[100],i;

	printf("enter element in arry to hold(100):");
	scanf("%d",&size);
	
	printf("enter %d element is :",size);
	
	for(i=0;i<size;i++)
	scanf("%d",&n[i]);
	
	max=n[0];
	for(i=0;i<size;i++)
	{
	
	if (n[i]>max)
	{
		max=n[i];
	}
	 
}

printf("the max vlaue in array is:%d",max);
	
}
main()
{
	findmax();
}
