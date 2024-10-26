#include<stdio.h>
main()
{
	char n1[10],n2[10],n3[11];
	printf("enter first name:");
	scanf("%s",&n1);
	printf("enter second name:");
	scanf("%s",&n2);
	printf("enter third name:");
	scanf("%s",&n3);
	printf("\nabbrivat name of contry:");

	printf("%c",n1[0]);
	printf(".%c",n2[0]);
	printf(".%c",n3[0]);
}
