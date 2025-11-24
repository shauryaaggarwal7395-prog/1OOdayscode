/*(Strings)
Check if one string is a rotation of another.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[201];
    int len1, len2;

    printf("Enter the first string: ");
    scanf("%[^\n]s", str1);
    getchar();

    printf("Enter the second string: ");
    scanf("%[^\n]s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2 || len1 == 0) {
        printf("The strings are not a rotation of each other.\n");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL) {
        printf("The strings are a rotation of each other.\n");
    } else {
        printf("The strings are not a rotation of each other.\n");
    }

    return 0;
}