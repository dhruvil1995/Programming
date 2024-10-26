#include<stdio.h>
main()
{
	char a[200];
	int i,word=0;
	printf("enter name:");//dhru eix
	gets(a);
	
	for (i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
		  word++;
		}
	}
	
	printf("total word is :%d\n",word+1);
}
