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
    }
}