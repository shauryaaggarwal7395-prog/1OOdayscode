/*(Strings)
Reverse each word in a sentence without changing the word order.*/

#include <stdio.h>
#include <string.h>

void reverse(char* str, int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    int start = 0;
    int end;
    int len;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", str);

    len = strlen(str);

    for (end = 0; end <= len; end++) {
        if (str[end] == ' ' || str[end] == '\0') {
            reverse(str, start, end - 1);
            start = end + 1;
        }
    }

    printf("The modified sentence is: %s\n", str);

    return 0;
}