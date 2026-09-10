//Q64: Find the digit that occurs the most times in an integer number.


#include<stdio.h>
int main ()
{
    long long int number;
    int digitCount[10] = {0};
    int maxCount = 0, mostFrequentDigit = -1;

    printf("Enter an integer number: ");
    if (scanf("%lld", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }
    while (number != 0) {
        int digit = number % 10;
        digitCount[digit]++;
        number /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > maxCount) {
            maxCount = digitCount[i];
            mostFrequentDigit = i;
        }
    }

    printf("The digit that occurs the most times is: %d\n", mostFrequentDigit);
    return 0;
}