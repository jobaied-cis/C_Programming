#include <stdio.h>
// Function to calculate the average salary
float calculateAverageSalary(float salaries[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += salaries[i];  // Summing all salaries
    }
    return sum / n;  // Returning average salary
}
int main() {
    int n;

    // Get the number of employees
    printf("Enter number of employees: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of employees!\n");
        return 1;  // Exit the program if input is invalid
    }

    float salaries[n]; // Array to store salaries

    // Loop to input salaries
    for (int i = 0; i < n; i++) {
        printf("Enter salary for Employee %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }
    // Call function to calculate average salary
    float avg = calculateAverageSalary(salaries, n);
    // Print the average salary
    printf("Average Salary: %.2f\n", avg);

    return 0;
}
