//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>
int main() {
    char name[200];
    int i = 0;

    // Read input name
    fgets(name, sizeof(name), stdin);

    // Print initials
    if (name[0] != '\n' && name[0] != '\0') {
        printf("%c.", name[0]); // Print first initial
    }

    for (i = 1; name[i] != '\0' && name[i] != '\n'; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0' && name[i + 1] != '\n') {
            printf("%c.", name[i + 1]); // Print subsequent initials
        }
    }

    printf("\n");
    return 0;
}