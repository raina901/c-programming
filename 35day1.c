//Q69: Find the second largest element in an array.


#include <stdio.h>
int main ()
{
    int n, i;
    
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Invalid array size. Must be at least 2.\n");
        return 1;
    }

    int arr[n]; 

    
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    
    int largest = arr[0];
    int second_largest = -2147483648; 

    
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    
    if (second_largest == -2147483648) {
        printf("No second largest element found.\n");
    } else {
        printf("%d\n", second_largest);
    }
    
    return 0;
}