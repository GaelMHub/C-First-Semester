/*
 * greeting.c
 * Author: Gael Morales Hernandez
 *
 * Reads the user's first name and prints a welcome message.
 */

#include <stdio.h>
#include <conio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hello, %s! Welcome.\n", name);

    getch();
    return 0;
}
