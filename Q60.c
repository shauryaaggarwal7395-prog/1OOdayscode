/*(Arrays (1D))
Count positive, negative, and zero elements in an array.*/

#include <stdio.h>

int main() {
    int arr[] = {10, -21, 0, 8, -5, 17, 0, -3, 99};
    int n = sizeof(arr) / sizeof(arr[0]);
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;
    int i;

    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Positive elements: %d\n", positiveCount);
    printf("Negative elements: %d\n", negativeCount);
    printf("Zero elements: %d\n", zeroCount);

    return 0;
}