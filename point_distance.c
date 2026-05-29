/*
 * point_distance.c
 * Author: Gael Morales Hernandez
 *
 * Reads the coordinates of two points (x1, y1) and (x2, y2)
 * and computes the Euclidean distance between them.
 */

#include <stdio.h>
#include <math.h>
#include <conio.h>

int main() {
    float x1, y1, x2, y2, distance;

    printf("Point 1 - x: ");  scanf("%f", &x1);
    printf("Point 1 - y: ");  scanf("%f", &y1);
    printf("Point 2 - x: ");  scanf("%f", &x2);
    printf("Point 2 - y: ");  scanf("%f", &y2);

    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("Distance: %.2f\n", distance);

    getch();
    return 0;
}
