Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main() 
{
    float P, R, T;
    float SI, CI;

    printf("Enter Principal amount: ");
    scanf("%f", &P);

    printf("Enter Rate of interest (in %% per year): ");
    scanf("%f", &R);

    printf("Enter Time (in years): ");
    scanf("%f", &T);

    SI = (P * R * T) / 100;
    CI = P * pow((1 + R / 100), T) - P;

    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);
    return 0;
}