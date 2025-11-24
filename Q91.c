/* (Strings)
Remove all vowels from a string.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    printf("The string without vowels is: %s\n", str);

    return 0;
}