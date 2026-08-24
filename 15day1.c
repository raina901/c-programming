//Q29: Write a program to calculate the factorial of a number.

#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    long long factorial = 1;
    for(int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("Factorial of %d is: %lld", n, factorial);
    return 0;
}