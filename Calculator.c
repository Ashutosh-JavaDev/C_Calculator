#include <stdio.h>
#include <stdlib.h>

void addition();
void subtraction();
void multiplication();
void division();

int main()
{
    int choice;
    while (1)
    {
        printf("\n*** Simple Calculator ***\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Clear (Reset)\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            system("cls"); // Clears the console (Windows)
            break;
        case 6:
            exit(0); // Exit the program
            break;
        default:
            printf("Invalid choice. Please select again.\n");
        }
    }
    return 0;
}

void addition()
{
    double num1, num2, result;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    result = num1 + num2;
    printf("Result: %.2lf\n", result);
}

void subtraction()
{
    double num1, num2, result;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    result = num1 - num2;
    printf("Result: %.2lf\n", result);
}

void multiplication()
{
    double num1, num2, result;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    result = num1 * num2;
    printf("Result: %.2lf\n", result);
}

void division()
{
    double num1, num2, result;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    if (num2 != 0)
    {
        result = num1 / num2;
        printf("Result: %.2lf\n", result);
    }
    else
    {
        printf("Error: Division by zero is undefined.\n");
    }
}
