/*(Arrays (1D))
Find the sum of array elements.*/

#include <stdio.h>

int main() {
    int size = 5;
    int array[size];
    int i;
    int sum = 0;
    
    printf("Enter %d integers for the array:\n", size);

    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < size; i++) {
        sum = sum + array[i];
    }
    
    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}
