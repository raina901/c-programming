/*Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index
 (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. 
 This element is called the ceil of x. If such an element does not exist, print -1. Note: 
 In case of multiple occurrences of ceil of x, return the index of the first occurrence.*/

#include <stdio.h>
int findCeilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1; 

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            result = mid;
            high = mid - 1; 
        } else {
            low = mid + 1;
        }
    }
    return result;
}

int main() {
    int n, x;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d sorted integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }
    printf("Enter x: ");
    if (scanf("%d", &x) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    int index = findCeilIndex(arr, n, x);
    printf("%d\n", index);

    return 0;
}
