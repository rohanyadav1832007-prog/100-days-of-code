//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>
int main() {
    char name[200];
    int i = 0, len;

    // Read input name
    fgets(name, sizeof(name), stdin);
    len = strlen(name);

    // Print initials for all but the last word
    if (name[0] != '\n' && name[0] != '\0') {
        printf("%c.", name[0]); // Print first initial
    }

    for (i = 1; i < len; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0' && name[i + 1] != '\n') {
            // Check if this is not the last word
            int j = i + 1;
            while (j < len && name[j] != ' ' && name[j] != '\n') {
                j++;
            }
            if (j < len) { // There is another word after this
                printf("%c.", name[i + 1]); // Print initial
            } else {
                break; // Last word reached
            }
        }
    }

    // Print the last word (surname) in full
    for (; i < len; i++) {
        if (name[i] != '\n') {
            putchar(name[i]);
        }
    }

    printf("\n");
    return 0;
}