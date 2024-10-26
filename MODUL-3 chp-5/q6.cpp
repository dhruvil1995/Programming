#include<stdio.h>
main()
{
	char a[20];
	int i,alphabets=0,digit=0,specialchar=0;
	
	printf("enter string name:");
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]>='A' && a[i]<='Z')|| (a[i]>='a' && a[i]<='z'))
		{
			alphabets++;
		}
		else if(a[i]>='0' && a[i]<='9')
		{
			digit++;
		}
		else if(a[i]!='\n' && a[i]!=' ')
		{
			specialchar++;
		}
	}

	printf("total alphabest:%d\n",alphabets);
	printf("total number of digits:	%d\n",digit);
	printf("total number of special char:%d\n",specialchar);
}
