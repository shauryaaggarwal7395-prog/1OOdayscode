/*(Strings)
Count vowels and consonants in a string.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowelCount = 0;
    int consonantCount = 0;
    int i;
    char ch;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++) {
        ch = tolower(str[i]);

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        } else if (ch >= 'a' && ch <= 'z') {
            consonantCount++;
        }
    }

    printf("Number of vowels: %d\n", vowelCount);
    printf("Number of consonants: %d\n", consonantCount);

    return 0;
}