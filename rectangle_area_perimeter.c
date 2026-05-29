/*
 * rectangle_area_perimeter.c
 * Author: Gael Morales Hernandez
 *
 * Reads the base and height of a rectangle and prints its area and perimeter.
 */

#include <stdio.h>
#include <conio.h>

int main() {
    float base, height, area, perimeter;

    printf("Base:   ");
    scanf("%f", &base);

    printf("Height: ");
    scanf("%f", &height);

    area      = base * height;
    perimeter = 2 * (base + height);

    printf("Area     : %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);

    getch();
    return 0;
}
