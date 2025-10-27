/*(Nested Loops without Arrays/Strings)
Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

* */

#include <stdio.h>

int main() {
    int lines[] = {1, 3, 5, 3, 1};
    int num_sets = sizeof(lines) / sizeof(lines[0]);
    int i, j;

    for (i = 0; i < num_sets; i++) {
        for (j = 0; j < lines[i]; j++) {
            printf("*\n");
        }
        printf("\n");
    }

    return 0;
}
