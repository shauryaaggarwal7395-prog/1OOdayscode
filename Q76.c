/*(2D Arrays)
Check if a matrix is symmetric.*/

#include <stdio.h>

#define MAX_SIZE 10

void readMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    int i, j;
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    int i, j;
    int isSymmetric = 1;

    printf("Enter the number of rows (1-%d): ", MAX_SIZE);
    scanf("%d", &rows);
    printf("Enter the number of columns (1-%d): ", MAX_SIZE);
    scanf("%d", &cols);

    if (rows <= 0 || rows > MAX_SIZE || cols <= 0 || cols > MAX_SIZE) {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }

    if (rows != cols) {
        printf("\nThe matrix is not symmetric because it is not a square matrix.\n");
        return 0;
    }

    readMatrix(matrix, rows, cols);

    for (i = 0; i < rows; i++) {
        for (j = i + 1; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (isSymmetric == 0) {
            break;
        }
    }

    if (isSymmetric) {
        printf("\nThe matrix is symmetric.\n");
    } else {
        printf("\nThe matrix is not symmetric.\n");
    }

    return 0;
}