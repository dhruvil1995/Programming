#include<stdio.h>
main()
{
	char a[10];
	int  vovel=0,i,	consonet=0;
	printf("enter string name:");
	gets(a);
	
		for(i=0;a[i]!='\0';i++)
		
	{
		char ch = a[i];
		if((ch >='A' && ch <='Z') || (ch >='a' && ch <='z'))
		{
		if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                {
                	vovel++;
				}
				else
				{
					consonet++;
				}
		}
		
		
		
		
		 }
		 
		 	printf("total vovel :%d\n",vovel);
		printf("total cocsonet :%d\n",consonet);
		 
		 }
