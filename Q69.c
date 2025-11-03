/*(Arrays (1D))
Find the second largest element in an array.*/

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {12, 35, 1, 10, 34, 35, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;
    int largest, secondLargest;

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }

    largest = INT_MIN;
    secondLargest = INT_MIN;

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", secondLargest);
    }

    return 0;
}