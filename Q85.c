/*(Strings)
Reverse a string.*/

#include <stdio.h>

int main() {
    char str[100];
    char temp;
    int i = 0, len = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[len] != '\0') {
        len++;
    }

    int start = 0;
    int end = len - 1;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("The reversed string is: %s\n", str);

    return 0;
}