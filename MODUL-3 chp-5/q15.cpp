#include <stdio.h>
#include <string.h>

int main() 
{
    char str[200], largest[100], smallest[100];
    char *word;
    int firstWord = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    
    str[strcspn(str, "\n")] = '\0';

    
    word = strtok(str, " ");

   
    while (word != NULL)
	{
       
        if (firstWord) 
		{
            strcpy(largest, word);
            strcpy(smallest, word);
            firstWord = 0;
        } else {
            
            if (strlen(word) > strlen(largest)) 
			{
                strcpy(largest, word);
            }
            // Check for the smallest word
            if (strlen(word) < strlen(smallest)) 
			{
                strcpy(smallest, word);
            }
        }
        
        word = strtok(NULL, " ");
    }
    
    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);

    
}
