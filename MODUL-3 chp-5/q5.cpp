#include<stdio.h>
main()//dhruvil
{
	char a[20],b[20];
	int i,f=0;
	printf("enter string 1:");//dhruvil
	gets (a);
	
	printf("enter string 2:");//dhruvil
	gets (b);
	
	for (i=0;a[i]!='\0'|| b[i]!='\0';i++)// or oprator
{
	if(a[i]!=b[i])
	{
	  f=1;
	  break;	
	}
}
 if(f==0)
 {
 	printf ("string are equil.\n");
 }
 else
 {
 	printf("string are not equl.\n");
 }
}
