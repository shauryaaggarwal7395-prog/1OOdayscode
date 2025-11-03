/*(Arrays (1D))
Search in a sorted array using binary search.*/

#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Avoids potential overflow

        // Check if key is present at mid
        if (arr[mid] == key) {
            return mid;
        }

        // If key is greater, ignore the left half
        if (arr[mid] < key) {
            low = mid + 1;
        } 
        // If key is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    // Return -1 if the element is not found
    return -1;
}

int main() {
    // Binary search requires a sorted array
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Sorted array: ");
    for(int i=0; i<n; i++) printf("%d ", arr[i]);
    printf("\nEnter the element to search for: ");
    scanf("%d", &key);

    int result = binarySearch(arr, n, key);

    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}