/*(Arrays (1D))
Read and print elements of a one-dimensional array.*/

#include <stdio.h>

int main() {
    int size = 5;
    int array[size];
    int i;
    
    printf("Enter %d integers for the array:\n", size);

    // Read elements into the array
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("The elements of the array are:\n");

    // Print elements of the array
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    
    printf("\n");

    return 0;
}
