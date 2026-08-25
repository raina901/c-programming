//Q32: Write a program to check if a number is a palindrome.

#include<stdio.h>
int main ()
{
    int n, original, reversed = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    
    original = n; 
    
    while(n != 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    
    if(original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);
    
    return 0;
}