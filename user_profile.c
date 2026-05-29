/*
 * user_profile.c
 * Author: Gael Morales Hernandez
 *
 * Collects basic user information (name, age, height, last-name initial)
 * and prints a formatted summary.
 */

#include <stdio.h>
#include <conio.h>

int main() {
    char name[30];
    int  age;
    float heightMeters;
    char lastNameInitial;

    printf("--- User Information ---\n");

    printf("Name: ");
    scanf("%s", name);

    printf("Age: ");
    scanf("%d", &age);

    printf("Height (meters): ");
    scanf("%f", &heightMeters);

    getchar(); /* consume newline before reading char */

    printf("First letter of last name: ");
    scanf("%c", &lastNameInitial);

    printf("\n--- User Profile ---\n");
    printf("Name             : %s\n",      name);
    printf("Age              : %d\n",      age);
    printf("Height           : %.2f m\n",  heightMeters);
    printf("Last name initial : %c\n",     lastNameInitial);

    getch();
    return 0;
}
