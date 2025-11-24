/*(Strings)
Check if two strings are anagrams of each other.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[100], str2[100];
    int count[26] = {0};
    int i, len1, len2;
    int isAnagram = 1;

    printf("Enter the first string: ");
    scanf("%[^\n]s", str1);
    getchar(); 

    printf("Enter the second string: ");
    scanf("%[^\n]s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);
    
    int alphaCount1 = 0;
    int alphaCount2 = 0;

    for (i = 0; i < len1; i++) {
        if (isalpha(str1[i])) {
            alphaCount1++;
        }
    }
    
    for (i = 0; i < len2; i++) {
        if (isalpha(str2[i])) {
            alphaCount2++;
        }
    }

    if (alphaCount1 != alphaCount2) {
        isAnagram = 0;
    } else {
        for (i = 0; i < len1; i++) {
            if (isalpha(str1[i])) {
                count[tolower(str1[i]) - 'a']++;
            }
        }

        for (i = 0; i < len2; i++) {
            if (isalpha(str2[i])) {
                count[tolower(str2[i]) - 'a']--;
            }
        }

        for (i = 0; i < 26; i++) {
            if (count[i] != 0) {
                isAnagram = 0;
                break;
            }
        }
    }

    if (isAnagram) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}