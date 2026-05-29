/*
 * triangle_classifier.c
 * Author: Gael Morales Hernandez
 *
 * Reads the three sides of a triangle, validates that they can
 * form a real triangle, then classifies it as equilateral,
 * isosceles, or scalene.
 */

#include <stdio.h>
#include <conio.h>

int main() {
    int side1, side2, side3;
    int isValid;

    printf("Enter the 3 sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    /* Validation must happen after reading the values */
    isValid = (side1 + side2 > side3) &&
              (side1 + side3 > side2) &&
              (side2 + side3 > side1);

    if (!isValid) {
        printf("The sides do not form a valid triangle.\n");
        getch();
        return 0;
    }

    if (side1 == side2 && side1 == side3) {
        printf("Equilateral triangle.\n");
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Isosceles triangle.\n");
    } else {
        printf("Scalene triangle.\n");
    }

    getch();
    return 0;
}
