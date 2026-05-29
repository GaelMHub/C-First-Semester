/*
 * liter_converter.c
 * Author: Gael Morales Hernandez
 *
 * Converts a volume in liters to one of five units:
 * microliters, milliliters, centiliters, deciliters, or gallons.
 */

#include <stdio.h>
#include <conio.h>

int main() {
    float liters;
    int option;

    printf("Enter volume in liters: ");
    scanf("%f", &liters);

    printf("Select conversion:\n");
    printf("1. Microliters\n");
    printf("2. Milliliters\n");
    printf("3. Centiliters\n");
    printf("4. Deciliters\n");
    printf("5. Gallons\n");
    printf("Option: ");
    scanf("%d", &option);

    switch (option) {
        case 1:  printf("%.2f L = %.2f microliters\n", liters, liters * 1000000.0f); break;
        case 2:  printf("%.2f L = %.2f milliliters\n", liters, liters * 1000.0f);    break;
        case 3:  printf("%.2f L = %.2f centiliters\n", liters, liters * 100.0f);     break;
        case 4:  printf("%.2f L = %.2f deciliters\n",  liters, liters * 10.0f);      break;
        case 5:  printf("%.2f L = %.2f gallons\n",     liters, liters / 3.785f);     break;
        default: printf("Invalid option.\n");
    }

    getch();
    return 0;
}
