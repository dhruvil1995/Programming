#include <stdio.h>

main() 
{
    int i, j, k = 0;
    char ch = 'A'; 

    for (i = 1; i <= 5; i++) 
	{
        
        for (j = 1; j <= i; j++) 
		{
            printf("%c ", ch);
            ch++; 
        }
        printf("\n");
    }

   
}
