#include <stdio.h>

int main() {
    char students[5][50]; // Array to hold names of 5 students

    // Accept names of 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%49s", students[i]); // Read name (limit to 49 characters)
    }

    // Display names of the students
    printf("\nThe names of the students are:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: %s\n", i + 1, students[i]); // Print each name
    }

    return 0;
}
