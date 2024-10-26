#include<stdio.h>
main()
{
	int day_number;
	
	printf("enter number day number:");
	scanf("%d",&day_number);
	
	switch(day_number)
	{
		case 1:
			printf("monday\n");
			break;
		case 2:
			printf("tuesday\n");
			break;
		case 3:
		    printf("wensuday\n");
		    break;
		case 4:
		    printf("thursday\n");
		    break;
		case 5:
		    printf("friday\n");
		    break;
		case 6:
		    printf("saturday\n");
		    break;
		case 7:
		    printf("sunday\n");
		    break;	
			default:
			printf("invalid day number.please enter a number between 1 and 7.\n")	;
	}
}
