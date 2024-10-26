#include<stdio.h>
main()
{
	int i,j,a[2][2],b[2][2],sum[i][j];
	
	printf("enter first element number : ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("first matrix  element number :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("enter secomd element number : ");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
		printf("second matrix  element number :\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}

	
	printf("sum of matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	
	printf("substraction of matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]-b[i][j];
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	
	printf("multiplication of matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]*b[i][j];
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	
}
