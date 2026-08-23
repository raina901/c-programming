//Q28: Write a program to print the product of even numbers from 1 to n.


#include<stdio.h>
int main ()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    long long product = 1;
    for(int i = 2; i <= n; i += 2)
    {
        product *= i;
    }
    printf("Product of even numbers from 1 to %d is: %lld", n, product);
    return 0;
}
