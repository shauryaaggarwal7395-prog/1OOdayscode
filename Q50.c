/*(Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*****
****
***
**
* */

#include <stdio.h>

int main() {
    int rows = 5;
    int i, j;

    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
