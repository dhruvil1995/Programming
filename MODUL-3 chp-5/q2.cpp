#include<stdio.h>
main()
{
	char a[10],i;
	printf("enter element:");//dhruvil
	gets(a);//dhruvil
	
	printf("the induvidiul character is:\n");
	for(i=0;a[i]!='\0';i++)//0 d 1 h 2 u 3 v 4 i 5 l==check i=0 d read a not null condi true 
	{
		if(a[i]!='\n')// if a not null \n == new line
		{
			printf("%c\n",a[i]); // print d loop continu
		}
	}
}
