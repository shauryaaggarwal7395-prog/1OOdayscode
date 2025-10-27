/*(Arrays (1D))
Find the maximum and minimum element in an array.*/

#include <stdio.h>

int main() {
    int size = 5;
    int array[size];
    int i;
    int max;
    int min;
    
    printf("Enter %d integers for the array:\n", size);

    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    max = array[0];
    min = array[0];

    for (i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }
    
    printf("The maximum element is: %d\n", max);
    printf("The minimum element is: %d\n", min);

    return 0;
}
