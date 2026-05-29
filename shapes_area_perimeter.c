/*
 * shapes_area_perimeter.c
 * Author: Gael Morales Hernandez
 *
 * Calculates the area and perimeter of nine geometric shapes:
 * triangle, rectangle, circle, square, rhombus, pentagon,
 * hexagon, trapezoid, and parallelogram.
 */

#include <stdio.h>
#include <conio.h>

int main() {
    int option;
    float base, height, side, side1, side2, side3, radius;
    float diagonal1, diagonal2, apothem, largerBase, smallerBase, parallelSides;
    float area, perimeter;
    const float PI = 3.1416f;

    printf("=== AREA AND PERIMETER CALCULATOR ===\n");
    printf("1. Triangle\n");
    printf("2. Rectangle\n");
    printf("3. Circle\n");
    printf("4. Square\n");
    printf("5. Rhombus\n");
    printf("6. Pentagon\n");
    printf("7. Hexagon\n");
    printf("8. Trapezoid\n");
    printf("9. Parallelogram\n");
    printf("Option: ");
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("Base: ");    scanf("%f", &base);
            printf("Height: ");  scanf("%f", &height);
            printf("Side 1: ");  scanf("%f", &side1);
            printf("Side 2: ");  scanf("%f", &side2);
            printf("Side 3: ");  scanf("%f", &side3);
            area      = (base * height) / 2;
            perimeter = side1 + side2 + side3;
            break;
        case 2:
            printf("Base: ");    scanf("%f", &base);
            printf("Height: ");  scanf("%f", &height);
            area      = base * height;
            perimeter = 2 * (base + height);
            break;
        case 3:
            printf("Radius: ");  scanf("%f", &radius);
            area      = PI * radius * radius;
            perimeter = 2 * PI * radius;
            break;
        case 4:
            printf("Side: ");  scanf("%f", &side);
            area      = side * side;
            perimeter = 4 * side;
            break;
        case 5:
            printf("Diagonal 1: ");  scanf("%f", &diagonal1);
            printf("Diagonal 2: ");  scanf("%f", &diagonal2);
            printf("Side: ");        scanf("%f", &side);
            area      = (diagonal1 * diagonal2) / 2;
            perimeter = 4 * side;
            break;
        case 6:
            printf("Side: ");     scanf("%f", &side);
            printf("Apothem: ");  scanf("%f", &apothem);
            perimeter = 5 * side;
            area      = (perimeter * apothem) / 2;
            break;
        case 7:
            printf("Side: ");     scanf("%f", &side);
            printf("Apothem: ");  scanf("%f", &apothem);
            perimeter = 6 * side;
            area      = (perimeter * apothem) / 2;
            break;
        case 8:
            printf("Larger base: ");              scanf("%f", &largerBase);
            printf("Smaller base: ");             scanf("%f", &smallerBase);
            printf("Height: ");                   scanf("%f", &height);
            printf("Sum of non-parallel sides: "); scanf("%f", &parallelSides);
            area      = ((largerBase + smallerBase) * height) / 2;
            perimeter = largerBase + smallerBase + parallelSides;
            break;
        case 9:
            printf("Base: ");         scanf("%f", &base);
            printf("Height: ");       scanf("%f", &height);
            printf("Lateral side: "); scanf("%f", &side);
            area      = base * height;
            perimeter = 2 * (base + side);
            break;
        default:
            printf("Invalid option.\n");
            getch();
            return 0;
    }

    printf("Area      = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    getch();
    return 0;
}
