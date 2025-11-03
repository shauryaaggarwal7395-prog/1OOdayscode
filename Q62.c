/*(Arrays (1D))
Reverse an array without taking extra space.*/

#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = n - 1;
    int temp;

    printf("Original array: ");
    printArray(arr, n);

    while (start < end) {
        // Swap the elements at start and end pointers
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the pointers towards the center
        start++;
        end--;
    }

    printf("Reversed array: ");
    printArray(arr, n);

    return 0;
}