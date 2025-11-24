/*(Strings)
Count spaces, digits, and special characters in a string.*/

#include <stdio.h>

int main() {
    char str[100];
    int spaces = 0;
    int digits = 0;
    int others = 0;
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            continue;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (ch == ' ') {
            spaces++;
        } else {
            others++;
        }
    }

    printf("Number of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", others);

    return 0;
}