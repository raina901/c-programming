//Q27: Write a program to print the sum of the first n odd numbers.

#include<stdio.h>
int main ()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        sum += (2 * i - 1); 
    }
    printf("Sum of first %d odd numbers is: %d", n, sum);
    return 0;
    
}

