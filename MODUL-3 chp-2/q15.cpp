#include<stdio.h>
main()
{
	int maths,phy,chm,totalmark,totalmp;
	
	printf("inpute mark obtain in Physics:");
	scanf("%d",&phy);
	
	printf("inpute mark obtain in Chemistry:");
	scanf("%d",&chm);
	
	printf("inpute mark obtain in maths");
	scanf("%d",&maths);
	
	totalmark=phy+chm+maths;
	totalmp=maths+phy;
	
	if((phy>=50&&chm>=55&&maths>=65&&totalmark>=137) ||(totalmp>=140) )
	{
		printf("the candidate eligible for admission:\n");
		
	}
	else
	{
		printf("the candidate is not eligible:\n ");
	}
	printf("Total marks of Maths, Physics and Chemistry: %d\n",totalmark);
	printf("Total marks of Maths and Physics: %d\n",totalmp);
	
}
