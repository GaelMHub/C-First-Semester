/*
 * times_table.c
 * Author: Gael Morales Hernandez
 *
 * Reads a number and prints its multiplication table from 1 to 10.
 */
#include <stdio.h>
int main(){
    int num, i = 1;

        printf("ENTER A NUMBER TO SEE ITS TIMES TABLE: ");
        scanf("%d", &num);
        
        while(i <= 10){
        printf("%d\n", num * i);
        i++;
                                }
getch();
return 0;
}
