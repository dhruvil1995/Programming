#include<stdio.h>
main()
{
	char a[10];
	int i;
	
	printf ("enter element:");
	gets(a);
	
	printf("revers string:");
	
	for(i=0;a[i] != '\0';i++);
	
	for(i--;i>=0;i--)
	

     {
	 
     printf("%c",a[i]);
}

   printf("\n");
}