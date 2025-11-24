// Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/ 
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int len, i, j;

    // Read input string
    fgets(str, sizeof(str), stdin);
    len = strlen(str);

    // Remove newline character if present
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Generate and print all substrings
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
            if (i != len - 1 || j != len - 1) {
                putchar(','); // Print comma between substrings
            }
        }
    }
    putchar('\n'); // New line at the end

    return 0;
}