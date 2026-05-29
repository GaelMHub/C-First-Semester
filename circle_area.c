/*
 * circle_area.c
 * Author: Gael Morales Hernandez
 *
 * Reads the radius of a circle and prints its area.
 */

#include <stdio.h>
#include <conio.h>

int main() {
    float radius, area;
    const float PI = 3.141592f;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Circle area: %.4f\n", area);

    getch();
    return 0;
}
