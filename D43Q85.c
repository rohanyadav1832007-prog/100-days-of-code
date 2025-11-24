//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
int main() {
    char str[100];
    char reversed[100];
    int i = 0, j = 0;

    // Read input string
    fgets(str, sizeof(str), stdin);

    // Find the length of the string
    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }

    // Reverse the string
    for (j = 0; j < i; j++) {
        reversed[j] = str[i - j - 1];
    }
    reversed[j] = '\0'; // Null-terminate the reversed string

    // Print the reversed string
    printf("%s\n", reversed);
    return 0;
}