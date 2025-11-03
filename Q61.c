/*(Arrays (1D))
Search for an element in an array using linear search.*/

#include <stdio.h>

int main() {
    int arr[] = {10, 50, 30, 70, 80, 20, 90, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    int index = -1; 
    int i;

    printf("Enter the element to search for: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break; 
        }
    }

    if (index != -1) {
        printf("Element %d found at index %d.\n", key, index);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}