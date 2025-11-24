/*(Strings)
Find the longest word in a sentence.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], longestWord[30], currentWord[30];
    int i = 0, j = 0, maxLength = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            currentWord[j] = str[i];
            j++;
        } else {
            currentWord[j] = '\0';
            if (j > maxLength) {
                maxLength = j;
                strcpy(longestWord, currentWord);
            }
            j = 0;
        }
    }

    currentWord[j] = '\0';
    if (j > maxLength) {
        strcpy(longestWord, currentWord);
    }

    printf("The longest word is: %s\n", longestWord);

    return 0;
}