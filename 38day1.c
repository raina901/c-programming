//Q75: Add two matrices.

#include <stdio.h>
int main() {
    int rows1, cols1, rows2, cols2;

    if (scanf("%d %d", &rows1, &cols1) != 2 || rows1 <= 0 || cols1 <= 0) {
        printf("Invalid dimensions for the first matrix.\n");
        return 1;
    }

    int matrix1[rows1][cols1];

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            if (scanf("%d", &matrix1[i][j]) != 1) {
                printf("Invalid input for the first matrix.\n");
                return 1;
            }
        }
    }

    if (scanf("%d %d", &rows2, &cols2) != 2 || rows2 <= 0 || cols2 <= 0) {
        printf("Invalid dimensions for the second matrix.\n");
        return 1;
    }

    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrices must have the same dimensions to be added.\n");
        return 1;
    }

    int matrix2[rows2][cols2];
    int sumMatrix[rows1][cols1];

    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            if (scanf("%d", &matrix2[i][j]) != 1) {
                printf("Invalid input for the second matrix.\n");
                return 1;
            }
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j]; 
        }
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}