/*(2D Arrays)
Find the transpose of a matrix.*/

#include <stdio.h>

#define MAX_SIZE 10

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
    int matrix[MAX_SIZE][MAX_SIZE];
    int transpose[MAX_SIZE][MAX_SIZE];
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

    printf("\nEnter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    printMatrix(matrix, rows, cols);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("\nTranspose of the Matrix:\n");
    printMatrix(transpose, cols, rows);

    return 0;
}