#include <stdio.h>
#include <ctype.h>

int is_vowel(char c) 
{
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() 
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    
    if (is_vowel(c))
	 {
        printf("%c is a vowel.\n", c);
    } 
	else 
	{
        printf("%c is not a vowel.\n", c);
    }
    
    
}
