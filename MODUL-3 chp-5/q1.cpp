#include<stdio.h>
main()
{
	char a[10],i;
	int len=0;
	
	printf("enter string :");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	
	printf("length of string is:%d",len);
}
