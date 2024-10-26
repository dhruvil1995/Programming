#include <stdio.h>
#include <string.h>

#define NUM_EMPLOYEES 5

int main() {
    char names[NUM_EMPLOYEES][50];
    float salaries[NUM_EMPLOYEES];
    float total_salary = 0.0;
    float average_salary;

    // Get employee information
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        printf("Enter the name of employee %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter the salary of employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
        total_salary += salaries[i];
    }

    // Calculate the average salary
    average_salary = total_salary / NUM_EMPLOYEES;

    // Print the results
    printf("\nEmployee Information:\n");
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        printf("Name: %s, Salary: $%.2f\n", names[i], salaries[i]);
    }
    printf("\nTotal Salary: $%.2f\n", total_salary);
    printf("Average Salary: $%.2f\n", average_salary);

    return 0;
}
