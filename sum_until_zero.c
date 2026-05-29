/*
 * sum_until_zero.c
 * Author: Gael Morales Hernandez
 *
 * Reads numbers from the user and accumulates their sum until 0 is entered.
 */
#include <stdio.h>
int main(){
          int num = 1, sum = 0;
          
          while(num != 0) {
          printf("ENTER A NUMBER: ");
          scanf("%d", &num);
          sum = num + sum;
                               }
                               
          printf("YOUR SUM IS: %d", sum);       
             
getch();
return 0;
}
