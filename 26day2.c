//Q52: Write a program to print the following pattern:

/*
*

*
*
*

*
*
*
*
*

*
*
*

*
*/

#include <stdio.h>

int main() {
    int i, j;
    int S = 5; 

    for (i = 1; i <= S; i += 2)
     {
        for (j = 0; j < i; j++) {
            printf("*\n");
        }
        printf("\n"); 
    }

    for (i = S - 2; i >= 1; i -= 2) {
        for (j = 0; j < i; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}
