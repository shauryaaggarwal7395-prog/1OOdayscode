/*(Arrays (1D))
Merge two arrays.*/

#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {10, 20, 30};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {40, 50, 60, 70};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int n3 = n1 + n2;
    int mergedArr[n3];
    
    int i;
    int k = 0; // Index for the merged array

    // Copy elements of the first array
    for (i = 0; i < n1; i++) {
        mergedArr[k] = arr1[i];
        k++;
    }

    // Copy elements of the second array
    for (i = 0; i < n2; i++) {
        mergedArr[k] = arr2[i];
        k++;
    }

    printf("Array 1: ");
    printArray(arr1, n1);

    printf("Array 2: ");
    printArray(arr2, n2);

    printf("Merged Array: ");
    printArray(mergedArr, n3);

    return 0;
}