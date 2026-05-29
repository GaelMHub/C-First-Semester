/*
 * calculator.c
 * Author: Gael Morales Hernandez
 *
 * Reads two numbers and an operator choice, then prints the result.
 * Division by zero is handled and reported as an error.
 */

#include <stdio.h>
#include <conio.h>

int main() {
    float num1, num2;
    int option;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Option: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("Result: %.2f\n", num1 + num2);
            break;
        case 2:
            printf("Result: %.2f\n", num1 - num2);
            break;
        case 3:
            printf("Result: %.2f\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0)
                printf("Result: %.2f\n", num1 / num2);
            else
                printf("Error: division by zero.\n");
            break;
        default:
            printf("Invalid option.\n");
    }

    getch();
    return 0;
}
