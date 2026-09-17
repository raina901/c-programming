//Q77: Check if the elements on the diagonal of a matrix are distinct.


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

    int diag[50] = {0};
    for (int i = 0; i < rows; i++) {
        diag[i] = mat[i][i];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < rows; j++) {
            if (diag[i] == diag[j]) {
                printf("False\n");
                return 0;
            }
        }
    }

    printf("True\n");
    return 0;
}