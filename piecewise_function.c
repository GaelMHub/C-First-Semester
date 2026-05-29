/*
 * piecewise_function.c
 * Author: Gael Morales Hernandez
 *
 * Evaluates a piecewise function:
 *   f(x) = -x^2 - x     if x < 0
 *   f(x) = -x^2 + 3x    if x > 0
 *   x = 0 is not in the domain.
 */

#include <stdio.h>
#include <conio.h>

int main() {
    float x;

    printf("Enter a number: ");
    scanf("%f", &x);

    if (x < 0) {
        printf("f(%.2f) = %.2f\n", x, -(x * x) - x);
    } else if (x > 0) {
        printf("f(%.2f) = %.2f\n", x, -(x * x) + 3 * x);
    } else {
        printf("x = 0 is not in the domain.\n");
    }

    getch();
    return 0;
}
