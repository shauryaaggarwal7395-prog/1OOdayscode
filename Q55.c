/*(Nested Loops without Arrays/Strings)
Write a program to print all the prime numbers from 1 to n.*/

#include <stdio.h>

int main() {
    int n = 30;
    int i, j;
    int is_prime;
    
    printf("Prime numbers up to %d:\n", n);

    for (i = 2; i <= n; i++) {
        is_prime = 1;
        
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}
