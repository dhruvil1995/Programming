#include<stdio.h>
main()
{
	int month_number;
	 printf("enter month number:");
	 scanf("%d",&month_number);
	
	 
	 switch(month_number)
	 {
	 	case 1:
	 		printf("january\n");
	 		break;
	    case 2:
	 		printf("february\n");
	 		break;
	 	case 3:
	 		printf("march\n");
	 		break;
	 	case 4:
	 		printf("april\n");
	 		break;
	 	case 5:
	 		printf("may\n");
	 		break;
	 	case 6:
	 		printf("june\n");
	 		break;
	 	case 7:
	 		printf("july\n");
	 		break;
	 	case 8:
	 		printf("augest\n");
	 		break;
	 	case 9:
	 		printf("suptember\n");
	 		break;
	 	case 10:
	 		printf("octomber\n");
	 		break;
	 	case 11:
	 		printf("november\n");
	 		break;
	 	case 12:
	 		printf("december\n");
	 		break;
	 	 default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
	 }
}
