#include <stdio.h>
#include <stdlib.h>
void addition();
void substraction();
void multipication();
void division();
int main()
{
    int choice;
    while (1)
    {
        printf("....Simple Calculator....\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multipication\n");
        printf("4. Division\n");
        printf("5. Clear(Reset\n");
        printf("6. Exit\n");
        printf("Choose wise (1-6)");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addition();
            break;
        case 2:
            substraction();
            break;
        case 3:
            multipication();
            break;
        case 4:
            division();
            break;
        case 5:
            system("Cls");
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Choose Wisely(1-6)\n");
        }
    }
    return 0;
}
void addition()
{
    double num1, num2, result;
    printf("Enter the Second Number\n");
    scanf("%lf", &num1);
    printf("Enter the Second Number\n");
    scanf("%lf", &num2);
    result = num1 + num2;
    printf("Result: %.2lf", result);
}
void subtraction()
{
    double num1, num2, result;
    printf("Enter the Second Number\n");
    scanf("%lf", &num1);
    printf("Enter the Second Number\n");
    scanf("%lf", &num2);
    result = num1 - num2;
    printf("Result: %.2lf", result);
}
void addition()
{
    double num1, num2, result;
    printf("Enter the Second Number\n");
    scanf("%lf", &num1);
    printf("Enter the Second Number\n");
    scanf("%lf", &num2);
    result = num1 * num2;
    printf("Result: %.2lf", result);
}
void addition()
{
    double num1, num2, result;
    printf("Enter the Second Number\n");
    scanf("%lf", &num1);
    printf("Enter the Second Number\n");
    scanf("%lf", &num2);
    if(num2!=0){
        result=num1/num2;
        printf("Result: %.2lf",result);
    }
    else{
        printf("Error:  Division with 0 is Undifined\n");
    }
}