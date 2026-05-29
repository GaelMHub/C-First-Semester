/*
 * number_sign.c
 * Author: Gael Morales Hernandez
 *
 * Reads an integer and reports whether it is positive, negative, or zero.
 */

#include <stdio.h>
#include <conio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    getch();
    return 0;
}
