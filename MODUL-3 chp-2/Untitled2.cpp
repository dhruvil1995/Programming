#include<stdio.h>
main()
{
	char cha;
	printf("enter a character:");
	scanf("%c",&cha);
	 switch (cha) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", cha);
            break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", cha);
            break;
            if ((cha >= 'a' && cha <= 'z') || (cha >= 'A' && cha <= 'Z'))
			 {
                printf("%c is a consonant.\n", cha);
            } 
			else
			 {
                printf("%c is not an alphabet.\n", cha);
            }
        }
    }
    
