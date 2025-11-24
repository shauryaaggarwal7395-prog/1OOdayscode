/*(2D Arrays)
Multiply two matrices.*/

#include <stdio.h>

#define MAX_SIZE 10

void readMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrixA[MAX_SIZE][MAX_SIZE];
    int matrixB[MAX_SIZE][MAX_SIZE];
    int result[MAX_SIZE][MAX_SIZE];
    int r1, c1, r2, c2;
    int i, j, k;

    printf("Enter dimensions for the first matrix (rows columns): ");
    scanf("%d %d", &r1, &c1);

    printf("Enter dimensions for the second matrix (rows columns): ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("\nMatrix multiplication not possible.\n");
        printf("Columns of the first matrix (%d) must equal rows of the second matrix (%d).\n", c1, r2);
        return 1;
    }

    printf("\nEnter elements for the first matrix (%d x %d):\n", r1, c1);
    readMatrix(matrixA, r1, c1);

    printf("\nEnter elements for the second matrix (%d x %d):\n", r2, c2);
    readMatrix(matrixB, r2, c2);

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (k = 0; k < c1; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    printf("\nResult of matrix multiplication (%d x %d):\n", r1, c2);
    printMatrix(result, r1, c2);

    return 0;
}