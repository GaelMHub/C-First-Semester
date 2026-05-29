/*
 * store_inventory.c
 * Author: Gael Morales Hernandez
 *
 * Reads the quantity and unit price of two products,
 * then prints the total cost for each.
 */

#include <stdio.h>
#include <conio.h>

int main() {
    int   quantityA, quantityB;
    float priceA, priceB;
    float totalA, totalB;

    printf("=== STORE INVENTORY ===\n");

    printf("Quantity of product A:   ");
    scanf("%d", &quantityA);

    printf("Unit price of product A: ");
    scanf("%f", &priceA);

    printf("Quantity of product B:   ");
    scanf("%d", &quantityB);

    printf("Unit price of product B: ");
    scanf("%f", &priceB);

    totalA = quantityA * priceA;
    totalB = quantityB * priceB;

    printf("\nProduct A — Quantity: %d | Total: $%.2f\n", quantityA, totalA);
    printf("Product B — Quantity: %d | Total: $%.2f\n",  quantityB, totalB);

    getch();
    return 0;
}
