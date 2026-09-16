//Q76: Check if a matrix is symmetric.


#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int mat[50][50];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] != mat[j][i]) {
                printf("False\n");
                return 0;
            }
        }
    }

    printf("True\n");
    return 0;
}
