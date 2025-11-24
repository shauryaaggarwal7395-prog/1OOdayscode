/*(Strings)
Check if a string is a palindrome.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int len = 0;
    int isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    while (str[len] != '\0') {
        len++;
    }

    int left = 0;
    int right = len - 1;

    while (left < right) {
        if (tolower(str[left]) != tolower(str[right])) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}