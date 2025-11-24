// Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;

    // Read input string
    fgets(str, sizeof(str), stdin);

    // Replace spaces with hyphens
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }

    // Print the modified string
    printf("%s\n", str);
    return 0;
}