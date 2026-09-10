//Q63: Merge two arrays.

#include<stdio.h>
int main ()
{
    int n1, n2, i, j;

    printf("Enter number of elements in first array: ");
    if (scanf("%d", &n1) != 1 || n1 <= 0) {
        printf("Invalid input. Please enter a positive integer for size.\n");
        return 1;
    }

    int arr1[n1];

    printf("Enter %d integers for first array: ", n1);
    for (i = 0; i < n1; i++) {
        if (scanf("%d", &arr1[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    printf("Enter number of elements in second array: ");
    if (scanf("%d", &n2) != 1 || n2 <= 0) {
        printf("Invalid input. Please enter a positive integer for size.\n");
        return 1;
    }

    int arr2[n2];

    printf("Enter %d integers for second array: ", n2);
    for (i = 0; i < n2; i++) {
        if (scanf("%d", &arr2[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    int mergedArray[n1 + n2];

    
    for (i = 0; i < n1; i++) {
        mergedArray[i] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        mergedArray[i + j] = arr2[j];
    }

    printf("Merged array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}