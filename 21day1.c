//Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>  

int main() {
    long num, firstDigit, lastDigit, digits, swappedNum, middlePart;

    printf("Enter a positive integer: ");
    if (scanf("%ld", &num) != 1 || num < 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    if (num < 10) {
        printf("Swapped number: %ld\n", num);
        return 0;
    }

    digits = (long)log10(num);

    firstDigit = num / (long)pow(10, digits);
    lastDigit = num % 10;

    middlePart = (num % (long)pow(10, digits)) / 10;

    swappedNum = lastDigit * (long)pow(10, digits) + middlePart * 10 + firstDigit;

    printf("Swapped number: %ld\n", swappedNum);

    return 0;
}
