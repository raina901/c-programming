//Q59: Count even and odd numbers in an array.

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    if (n == 0) {
        printf("Even=0, Odd=0\n");
        return 0;
    }

    int arr[n];
    int evenCount = 0, oddCount = 0;

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Even=%d, Odd=%d\n", evenCount, oddCount);
    return 0;
}
