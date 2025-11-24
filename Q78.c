/*(2D Arrays)
Find the sum of main diagonal elements for a square matrix.*/

#include <stdio.h>

#define MAX_SIZE 10

void readMatrix(int matrix[][MAX_SIZE], int size) {
    int i, j;
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;
    int i;
    int diagonalSum = 0;

    printf("Enter the size of the square matrix (1-%d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    readMatrix(matrix, size);

    for (i = 0; i < size; i++) {
        diagonalSum += matrix[i][i];
    }

    printf("\nThe sum of the main diagonal elements is: %d\n", diagonalSum);

    return 0;
}