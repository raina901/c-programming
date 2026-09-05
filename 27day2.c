//Q54: Write a program to print the following pattern:

/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include<stdio.h>
int main ()
{
    int i, j;
    int S = 4; 

    for (i = 1; i <= S; i++)
     {
        for (j = 1; j <= S - i; j++) {
            printf(" ");
        }
        for (j = 0; j < (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
     for (i = S - 1; i >= 1; i--) {
        for (j = 1; j <= S - i; j++) {
            printf(" ");
        }
        for (j = 0; j < (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}