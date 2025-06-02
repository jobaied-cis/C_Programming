#include <stdio.h>

int main()
{
    int a, b, choice, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nChoose an operation:\n");
    printf("1. Division\n");
    printf("2. Multiplication\n");
    printf("3. Modulus (Remainder)\n");
    printf("4. Addition\n");
    printf("5. Subtraction\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:

                result = a / b;
                printf("The division result is = %d\n", result);

            break;

        case 2:
            result = a * b;
            printf("The multiplication result is = %d\n", result);
            break;

        case 3:

                result = a % b;
                printf("The remainder is = %d\n", result);

            break;

        case 4:
            result = a + b;
            printf("The sum is = %d\n", result);
            break;

        case 5:
            result = a - b;
            printf("The subtraction result is = %d\n", result);
            break;

        default:
            printf("Invalid choice. Please enter a number between 1 and 5.\n");
    }

    return 0;
}

