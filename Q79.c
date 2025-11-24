/*(2D Arrays)
Perform diagonal traversal of a matrix.*/

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
    int i, j, line;

    printf("Enter the number of rows (1-%d): ", MAX_SIZE);
    scanf("%d", &rows);
    printf("Enter the number of columns (1-%d): ", MAX_SIZE);
    scanf("%d", &cols);

    if (rows <= 0 || rows > MAX_SIZE || cols <= 0 || cols > MAX_SIZE) {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }

    readMatrix(matrix, rows, cols);

    printf("\nDiagonal traversal of the matrix:\n");

    int maxLine = (rows - 1) + (cols - 1);

    for (line = 0; line <= maxLine; line++) {
        for (i = 0; i < rows; i++) {
            j = line - i;
            if (j >= 0 && j < cols) {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}