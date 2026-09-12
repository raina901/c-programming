//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include <stdio.h>

#define MAX_SIZE 100  

int main() {
    int arr[MAX_SIZE];
    int n, pos, elem;

    
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_SIZE) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    printf("Enter position (0-based index) to insert: ");
    if (scanf("%d", &pos) != 1 || pos < 0 || pos > n) {
        printf("Invalid position.\n");
        return 1;
    }

    printf("Enter element to insert: ");
    if (scanf("%d", &elem) != 1) {
        printf("Invalid element.\n");
        return 1;
    }


    if (n >= MAX_SIZE) {
        printf("Array is full. Cannot insert.\n");
        return 1;
    }

    
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = elem;
    n++;
    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


