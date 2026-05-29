/*
 * basic_operations.c
 * Author: Gael Morales Hernandez
 *
 * Reads two numbers and prints the result of all four basic
 * arithmetic operations. Division by zero is reported as an error.
 */

#include <stdio.h>
#include <conio.h>

int main() {
    float a, b;

    printf("First number:  ");
    scanf("%f", &a);

    printf("Second number: ");
    scanf("%f", &b);

    printf("\n--- Results ---\n");
    printf("Addition      : %.2f\n", a + b);
    printf("Subtraction   : %.2f\n", a - b);
    printf("Multiplication: %.2f\n", a * b);

    if (b != 0)
        printf("Division      : %.2f\n", a / b);
    else
        printf("Division      : undefined (division by zero)\n");

    getch();
    return 0;
}
