/*
 * vector_product.c
 * Author: Gael Morales Hernandez
 *
 * Reads two integer vectors and stores their element-wise product in a third vector.
 */
#include <stdio.h>

int main() {
    int v1[10], v2[10], v3[10];
    int n, i;

    printf("Enter the number of elements (maximum 10): ");
    scanf("%d", &n);

    if (n > 10 || n <= 0) {
        printf("Size must be between 1 and 10.\n");
        return 1;
    }

    printf("Enter the elements of the first vector:\n");
    for (i = 0; i < n; i++) {
        printf("v1[%d] = ", i);
        scanf("%d", &v1[i]);
    }

    printf("Enter the elements of the second vector:\n");
    for (i = 0; i < n; i++) {
        printf("v2[%d] = ", i);
        scanf("%d", &v2[i]);
    }

    for (i = 0; i < n; i++) {
        v3[i] = v1[i] * v2[i];
    }

    printf("\nVector 1: ");
    for (i = 0; i < n; i++) {
        printf("%d ", v1[i]);
    }

    printf("\nVector 2: ");
    for (i = 0; i < n; i++) {
        printf("%d ", v2[i]);
    }

    printf("\nVector 3 (result): ");
    for (i = 0; i < n; i++) {
        printf("%d ", v3[i]);
    }

    printf("\n");

    getch();
    return 0;
}
