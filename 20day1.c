//Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>
#include <stdlib.h> 

int main() {
    long long num; 
    long long temp;
    int digit;
    long long product = 1;
    int hasOdd = 0;

    printf("Enter an integer: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    temp = llabs(num);

    if (temp == 0) {
        printf("Product of odd digits: 1\n");
        return 0;
    }
    while (temp > 0) {
        digit = temp % 10;
        if (digit % 2 != 0) { // Odd digit
            product *= digit;
            hasOdd = 1;
        }
        temp /= 10;
    }
    if (!hasOdd) {
        product = 1;
    }

    printf("Product of odd digits: %lld\n", product);
    return 0;
}

