#include<stdio.h>
main()
{
	char a[10],ch;
	int i,count=0;
	
	printf("enter string name:");
	gets(a);
	
	printf("enter character find max in string:");
	scanf("%c",&ch);
	
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]==ch)
		count++;
	}
	printf("max of %c=%d",ch,count);
}
