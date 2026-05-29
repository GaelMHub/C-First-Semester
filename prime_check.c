/*
 * prime_check.c
 * Author: Gael Morales Hernandez
 *
 * Reads an integer and determines whether it is a prime number.
 * Numbers less than or equal to 1 are treated as non-prime.
 */

#include <stdio.h>
#include <conio.h>

int main() {
    int number, divisor;
    int isPrime = 1;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number <= 1) {
        isPrime = 0;
    } else {
        for (divisor = 2; divisor < number; divisor++) {
            if (number % divisor == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    getch();
    return 0;
}
