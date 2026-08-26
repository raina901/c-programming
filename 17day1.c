//Q33: Write a program to check if a number is an Armstrong number.

#include<stdio.h>
#include <math.h>
int main ()
{
    int n, original, sum = 0, digits = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    original = n; 
    int temp = n;
    while(temp != 0)
    {
        digits++;
        temp /= 10;
    }
    temp = n;
    while(temp != 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    if(original == sum)
        printf("%d is an Armstrong number.", original);
    else
        printf("%d is not an Armstrong number.", original);
    
    return 0;
}