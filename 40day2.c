//Q80: Multiply two matrices.

#include <stdio.h>
int main() {
    int rows1, cols1, rows2, cols2;
    scanf("%d %d", &rows1, &cols1);
    int mat1[50][50];
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < cols1; j++)
            scanf("%d", &mat1[i][j]);

    scanf("%d %d", &rows2, &cols2);
    int mat2[50][50];
    for (int i = 0; i < rows2; i++)
        for (int j = 0; j < cols2; j++)
            scanf("%d", &mat2[i][j]);

    if (cols1 != rows2) {
        printf("Matrix multiplication not possible.\n");
        return 0;
    }

    int result[50][50] = {0};
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}