

#include <stdio.h>

int main() {
    int n;

    // Get the number of employees
    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Check if the number of employees is valid
    if (n <= 0) {
        printf("Invalid number of employees!\n");
        return 1;  // Exit the program if input is invalid
    }

    // Declare arrays to store employee details
    char names[n][50];      // Array for employee names
    int ages[n];            // Array for employee ages
    float salaries[n];      // Array for employee salaries
    char positions[n][50];  // Array for employee positions
    int experience[n];      // Array for employee years of experience

    // Loop to input employee details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);
        printf("Name: ");
        scanf(" %49[^\n]", names[i]);  // Read a name with spaces
        printf("Age: ");
        scanf("%d", &ages[i]);
        printf("Salary: ");
        scanf("%f", &salaries[i]);
        printf("Position: ");
        scanf(" %49[^\n]", positions[i]);
        printf("Experience (in years): ");
        scanf("%d", &experience[i]);
    }

    // Generating the report
    printf("\nEmployee Report:\n");
    printf("-------------------------------------------------\n");
    printf("| %-15s | %-5s | %-10s | %-10s | %-10s |\n", "Name", "Age", "Salary", "Position", "Experience Level");
    printf("-------------------------------------------------\n");

    // Loop to display each employee's details
    for (int i = 0; i < n; i++) {
        // Display employee details
        printf("| %-15s | %-5d | %-10.2f | %-10s | ", names[i], ages[i], salaries[i], positions[i]);

        // Determine experience level
        if (experience[i] <= 2) {
            printf("Junior\n");
        } else if (experience[i] <= 6) {
            printf("Mid-Level\n");
        } else {
            printf("Senior\n");
        }

        // Print a separator for clarity in the report
        printf("-------------------------------------------------\n");
    }

    return 0;
}
