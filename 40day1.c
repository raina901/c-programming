//Q79: Perform diagonal traversal of a matrix.


#include <stdio.h>
#include <stdlib.h>


void diagonalTraversal(int **mat, int rows, int cols) {
    if (rows <= 0 || cols <= 0) {
        printf("Matrix dimensions must be positive.\n");
        return;
    }

    
    for (int d = 0; d < rows + cols - 1; d++) {
        
        int r, c;

        if (d % 2 == 0) {
            
            r = (d < rows) ? d : rows - 1;
            c = d - r;
            while (r >= 0 && c < cols) {
                printf("%d ", mat[r][c]);
                r--;
                c++;
            }
        } else {
    
            c = (d < cols) ? d : cols - 1;
            r = d - c;
            while (c >= 0 && r < rows) {
                printf("%d ", mat[r][c]);
                r++;
                c--;
            }
        }
    }
    printf("\n");
}

int main() {
    int rows, cols;


    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0) {
        printf("Invalid input. Please enter positive integers for dimensions.\n");
        return 1;
    }

    int **mat = (int **)malloc(rows * sizeof(int *));
    if (!mat) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (int i = 0; i < rows; i++) {
        mat[i] = (int *)malloc(cols * sizeof(int));
        if (!mat[i]) {
            printf("Memory allocation failed.\n");
            return 1;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &mat[i][j]) != 1) {
                printf("Invalid input. Please enter integers only.\n");
                return 1;
            }
        }
    }

    diagonalTraversal(mat, rows, cols);

    for (int i = 0; i < rows; i++) {
        free(mat[i]);
    }
    free(mat);

    return 0;
}
