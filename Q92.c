/*(Strings)
Find the first repeating lowercase alphabet in a string.*/

#include <stdio.h>

int main() {
    char str[100];
    int seen[26] = {0};
    char firstRepeat = '\0';
    int i;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';
            if (seen[index] == 1) {
                firstRepeat = ch;
                break;
            } else {
                seen[index] = 1;
            }
        }
    }

    if (firstRepeat != '\0') {
        printf("The first repeating lowercase alphabet is: '%c'\n", firstRepeat);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}