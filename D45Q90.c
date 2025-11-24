// Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;

    // Read input string
    fgets(str, sizeof(str), stdin);

    // Toggle case of each character
    while (str[i] != '\0' && str[i] != '\n') {
        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') {
            // Convert uppercase to lowercase
            str[i] = ch + 32;
        } else if (ch >= 'a' && ch <= 'z') {
            // Convert lowercase to uppercase
            str[i] = ch - 32;
        }
        i++;
    }

    // Print the modified string
    printf("%s\n", str);
    return 0;
}