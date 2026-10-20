//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    int actual = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        actual = actual + nums[i];  
    }

    int expected = n * (n + 1) / 2;

    printf("%d", expected - actual);
    return 0;
}