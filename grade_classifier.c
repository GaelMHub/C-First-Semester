/*
 * grade_classifier.c
 * Author: Gael Morales Hernandez
 *
 * Reads a numeric grade (0-100) and classifies it as
 * excellent (>= 90), passing (70-89), or failing (< 70).
 */

#include <stdio.h>
#include <conio.h>

int main() {
    int grade;

    printf("Enter your grade: ");
    scanf("%d", &grade);

    if (grade >= 90) {
        printf("Excellent.\n");
    } else if (grade >= 70) {
        printf("Passing.\n");
    } else {
        printf("Failing.\n");
    }

    getch();
    return 0;
}
