/*(Arrays (1D))
Insert an element in a sorted array at the appropriate position.*/

#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[20] = {10, 50, 30, 70, 80, 20, 90, 40};
    int n = 8;
    int key;
    int i;
    int pos = -1;

    printf("Original array: ");
    printArray(arr, n);

    printf("Enter the element to delete: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Element %d not found in the array.\n", key);
    } else {
        for (i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("Array after deleting %d: ", key);
        printArray(arr, n);
    }

    return 0;
}