/*(2D Arrays)
Check if the elements on the diagonal of a matrix are distinct.*/

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
    int areDistinct = 1;

    printf("Enter the number of rows (1-%d): ", MAX_SIZE);
    scanf("%d", &rows);
    printf("Enter the number of columns (1-%d): ", MAX_SIZE);
    scanf("%d", &cols);

    if (rows <= 0 || rows > MAX_SIZE || cols <= 0 || cols > MAX_SIZE) {
        printf("Invalid matrix dimensions.\n");
        return 1;
    }

    if (rows != cols) {
        printf("\nMatrix is not square, so the diagonal check is not applicable.\n");
        return 0;
    }

    readMatrix(matrix, rows, cols);

    for (i = 0; i < rows; i++) {
        for (j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                areDistinct = 0;
                break;
            }
        }
        if (areDistinct == 0) {
            break;
        }
    }

    if (areDistinct) {
        printf("\nThe elements on the main diagonal are distinct.\n");
    } else {
        printf("\nThe elements on the main diagonal are not distinct.\n");
    }

    return 0;
}