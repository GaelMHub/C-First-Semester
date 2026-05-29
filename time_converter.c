/*
 * time_converter.c
 * Author: Gael Morales Hernandez
 *
 * Reads a number of seconds and converts it to minutes and remaining seconds.
 */
#include <stdio.h>
int main(){

    int s, m;
        
        printf("Enter your seconds: ");
        scanf("%d", &s);
        
          m = s / 60;
          s = s % 60;
        
        printf("Your seconds in minutes are: %d minutes and %d seconds", m, s); 

getch();
return 0;
}
