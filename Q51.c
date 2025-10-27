/*(Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
5
45
345
2345
12345 */

#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;

    for (i = 5; i >= 1; i--) {
        for (j = i; j <= rows; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
