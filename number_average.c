/*
 * number_average.c
 * Author: Gael Morales Hernandez
 *
 * Reads three numbers from the user and prints their average.
 */
#include <stdio.h> 
int main(){
    
    float a, b, c;    
           
           printf("Enter your first number: ");
           scanf("%f", &a);
    
           printf("Enter your second number: ");
           scanf("%f", &b);
           
           printf("Enter your third number: ");
           scanf("%f", &c);
           
           printf("The average of the three numbers is: %.2f", (a + b + c) / 3);
           
    getch();
    return 0;
}
