#include<stdio.h>
main()
{
	char a[10],b[10];
	int i,j;
	
	printf("enter first string name:");
	gets(a);
	
	printf("enter second string name:");
	gets(b);
	
	for(a[i]=0;a[i]!='\0';i++)
	{
		
	}
	for(b[j]=0;b[j]!='\0';j++,i++)
	{
		a[i]=b[j];
	}
	a[i]='\0';
	printf("after combin two string :%s",a[i]);
	
}
