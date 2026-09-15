//Q73: Find the sum of each row of a matrix and store it in an array.


#include <stdio.h>
int main() {
    int rows, cols;

    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }

    int matrix[rows][cols];
    int rowSums[rows];

    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0; 
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
            rowSums[i] += matrix[i][j]; 
        }
    }

    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSums[i]);
    }
    printf("\n");

    return 0;
}