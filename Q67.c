/*(Arrays (1D))
Insert an element in an array at a given position.*/

#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[20] = {10, 20, 30, 40, 50};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 5;
    int key, pos;
    int i;

    printf("Original array: ");
    printArray(arr, n);

    printf("Enter the element to insert: ");
    scanf("%d", &key);

    printf("Enter the position (index 0 to %d): ", n);
    scanf("%d", &pos);

    if (n >= capacity) {
        printf("Array overflow. Cannot insert element.\n");
        return 1;
    }

    if (pos < 0 || pos > n) {
        printf("Invalid position. Please enter a position between 0 and %d.\n", n);
        return 1;
    }

    for (i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = key;
    n++;

    printf("Array after insertion: ");
    printArray(arr, n);

    return 0;
}