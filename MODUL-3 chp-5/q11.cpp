#include<stdio.h>
main()
{
	char a[20];
	int i;
	
	printf("enter a string :");//DHRUVIL
	gets(a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i]=a[i]-'a'+'A';
		}
		else if(a[i]>='A' && a[i]<='Z')//D-D+d=d loop continus
		{
			a[i]=a[i]-'A'+'a';
		} 
	}
	
	printf("modified sentence:%s",a);
}
