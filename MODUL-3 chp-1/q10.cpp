#include<stdio.h>
main()
{
	int l,w,h;
	printf("Enter vlaue for rectangular prisum length:");
	scanf("%d",&l);
	printf("Enter value for rectangular prisum width:");
	scanf("%d",&w);
	printf("Enter vlaue for rectangular prisum hight:");
	scanf("%d",&h);
	printf("\nArea of rectangular prisum:%d",2*(w*l+h*l+h*w));
	
}
