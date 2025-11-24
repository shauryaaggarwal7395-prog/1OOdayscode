/*(2D Arrays)
Add two matrices.*/

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
    int sumMatrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    int i, j;

    printf("Enter the number of rows (1-%d): ", MAX_SIZE);
    scanf("%d", &rows);
    printf("Enter the number of columns (1-%d): ", MAX_SIZE);
    scanf("%d", &cols);

    if (rows <= 0 || rows > MAX_SIZE || cols <= 0 || cols > MAX_SIZE) {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }

    printf("\nEnter elements for the first matrix:\n");
    readMatrix(matrixA, rows, cols);

    printf("\nEnter elements for the second matrix:\n");
    readMatrix(matrixB, rows, cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    printf("\nMatrix A:\n");
    printMatrix(matrixA, rows, cols);

    printf("\nMatrix B:\n");
    printMatrix(matrixB, rows, cols);

    printf("\nSum of the two matrices:\n");
    printMatrix(sumMatrix, rows, cols);

    return 0;
}