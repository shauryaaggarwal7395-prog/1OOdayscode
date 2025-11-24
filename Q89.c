/*(Strings)
Count frequency of a given character in a string.*/

#include <stdio.h>

int main() {
    char str[100];
    char target;
    int i;
    int frequency = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    printf("Enter the character to count: ");
    scanf(" %c", &target);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            frequency++;
        }
    }

    printf("The character '%c' appears %d times.\n", target, frequency);

    return 0;
}