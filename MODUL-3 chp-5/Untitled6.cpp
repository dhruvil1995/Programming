#include <stdio.h>

int main() {
    char str[100];  // Declare a string with a maximum length
    int count = 0; // Variable to count characters

    // Prompt user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string input

    // Iterate through the string to count characters
    while (str[count] != '\0') {
        count++;
    }

    // Adjust count for the newline character if present
    if (str[count - 1] == '\n') {
        count--;
    }

    // Output the maximum number of characters
    printf("The maximum number of characters in the string is: %d\n", count);

    return 0;
}
