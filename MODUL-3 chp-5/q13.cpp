#include<stdio.h>
#include <ctype.h>
main()
{
	char a[10],result[10];
	int i,j=0;
	printf("enter string name:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
	if (isalpha(a[i]))
		{
			result[j++]=a[i];
		}
	}
	result[j]='\0';
	
	printf("string after removing nonalphabet character :%s\n",result);
}
