#include<stdio.h>
findfuc()
{   int max,i,size,a[100];
	max=a[0];
	for(i=1;i<size;i++)
	
		if(a[i]>max)
		{
			max=a[i];
		}
		
	return max;	
}
main()
{
	int i,size;
	
	printf("enter size of array:");
	scanf("%d",&size);
	
	int a[size];
	
	printf("enter elemnt:%d\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
   
	printf("max number of array %d\n:",findfuc());
	
}

