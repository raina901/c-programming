/*Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such
 that the sum of all elements between 1 and x inclusively equals the sum of all elements between
  x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume 
  that it is guaranteed that there will be at most one pivot integer for the given input.*/

#include <stdio.h>
long long sum_upto(long long m) {
    return m * (m + 1) / 2;
}

int main() {
    long long n;
    printf("Enter a positive integer n: ");
    
    if (scanf("%lld", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    long long total_sum = sum_upto(n);
    int pivot = -1;

    for (long long x = 1; x <= n; x++) {
        long long left_sum = sum_upto(x);
        long long right_sum = total_sum - sum_upto(x - 1);
        
        if (left_sum == right_sum) {
            pivot = (int)x;
            break; 
        }
    }

    printf("%d\n", pivot);
    return 0;
}
