/*
 * matrix_stats.c
 * Author: Gael Morales Hernandez
 *
 * Reads an N x M integer matrix (max 10x10) and computes
 * the sum, average, and mode of all its elements.
 * Mode is found via brute-force frequency count.
 */

#include <stdio.h>
#include <conio.h>

int main() {
    int rows, cols;
    int matrix[10][10];
    int i, j, a, b;
    int sum = 0;
    int mode, maxCount, current, count;
    float average;

    printf("Number of rows (max 10): ");
    scanf("%d", &rows);

    printf("Number of columns (max 10): ");
    scanf("%d", &cols);

    printf("\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
        printf("\n");
    }

    average = (float)sum / (rows * cols);

    mode     = matrix[0][0];
    maxCount = 0;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            current = matrix[i][j];
            count   = 0;

            for (a = 0; a < rows; a++) {
                for (b = 0; b < cols; b++) {
                    if (matrix[a][b] == current) count++;
                }
            }

            if (count > maxCount) {
                maxCount = count;
                mode     = current;
            }
        }
    }

    printf("Results:\n");
    printf("  Sum    : %d\n",   sum);
    printf("  Average: %.2f\n", average);
    printf("  Mode   : %d (appears %d times)\n", mode, maxCount);

    getch();
    return 0;
}
