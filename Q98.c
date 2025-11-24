/*(Strings)
Print initials of a name with the surname displayed in full.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int len, i;
    int lastSpaceIndex = -1;

    printf("Enter a full name: ");
    scanf("%[^\n]s", name);

    len = strlen(name);

    for (i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastSpaceIndex = i;
            break;
        }
    }

    if (lastSpaceIndex == -1) {
        printf("%s\n", name);
    } else {
        printf("%c.", toupper(name[0]));
        for (i = 1; i < lastSpaceIndex; i++) {
            if (name[i - 1] == ' ') {
                printf(" %c.", toupper(name[i]));
            }
        }
        printf(" %s\n", &name[lastSpaceIndex + 1]);
    }

    return 0;
}