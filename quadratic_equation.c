/*
 * quadratic_equation.c
 * Author: Gael Morales Hernandez
 *
 * Solves a quadratic equation of the form ax^2 + bx + c = 0
 * using the quadratic formula. Reports an error for a = 0
 * and handles negative discriminants (no real roots).
 */

#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    float a, b, c;
    float discriminant, x1, x2;

    printf("Quadratic equation: ax^2 + bx + c = 0\n");
    printf("a: ");  scanf("%f", &a);
    printf("b: ");  scanf("%f", &b);
    printf("c: ");  scanf("%f", &c);

    if (a == 0) {
        printf("Error: coefficient a cannot be zero.\n");
        getch();
        return 1;
    }

    discriminant = (b * b) - (4 * a * c);
    printf("Discriminant: %.2f\n", discriminant);

    if (discriminant < 0) {
        printf("No real roots (discriminant is negative).\n");
    } else if (discriminant == 0) {
        x1 = -b / (2 * a);
        printf("One real root: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Root 1: %.2f\n", x1);
        printf("Root 2: %.2f\n", x2);
    }

    getch();
    return 0;
}
