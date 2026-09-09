//Q61: Search for an element in an array using linear search.


#include<stdio.h>
int main ()
{
    int n, i, searchElement, foundIndex = -1;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer for size.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    printf("Enter the element to search: ");
    if (scanf("%d", &searchElement) != 1) {
        printf("Invalid input. Please enter an integer to search.\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex != -1) {
        printf("Found at index %d\n", foundIndex);
    } else {
        printf("-1\n");
    }

    return 0;
}