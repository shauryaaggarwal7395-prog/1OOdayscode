/*(Arrays (1D))
Count even and odd numbers in an array.*/

#include <stdio.h>

int main() {
    int size = 5;
    int array[size];
    int i;
    int even_count = 0;
    int odd_count = 0;
    
    printf("Enter %d integers for the array:\n", size);

    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    printf("Even numbers count: %d\n", even_count);
    printf("Odd numbers count: %d\n", odd_count);

    return 0;
}
