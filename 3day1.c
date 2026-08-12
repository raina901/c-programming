Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main()
{
    float C, F;
    printf("Enter the temperature in Celsius:");
    scanf("%f", &C);
    F = (C*9/5) + 32;
    printf("Temperature in Farheniheit is %f\n", F);
    return 0;
}