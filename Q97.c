/*(Strings)
Print the initials of a name.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int len, i;

    printf("Enter a full name: ");
    scanf("%[^\n]s", name);

    len = strlen(name);

    if (len > 0) {
        printf("%c.", toupper(name[0]));

        for (i = 1; i < len; i++) {
            if (name[i - 1] == ' ') {
                printf(" %c.", toupper(name[i]));
            }
        }
        printf("\n");
    }

    return 0;
}