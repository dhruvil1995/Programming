#include<stdio.h>
main()
{
    char fname[10],mname[10],lname[10];
    printf("\nenter first name:");
    scanf("%s",&fname);
    printf("\nenter midle  name:");
     scanf("%s",&mname);
    printf("\nenter last name:");
     scanf("%s",&lname);
     printf("\nabbravitive formn:");
     printf("%c",fname[0]);
     printf("%c",mname[0]);
     printf("%s",lname);
}
