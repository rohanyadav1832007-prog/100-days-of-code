// Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>
int main() {
    char str[100];
    int i = 0, j = 0;
    int isPalindrome = 1; // Assume it is a palindrome

    // Read input string
    fgets(str, sizeof(str), stdin);

    // Find the length of the string
    while (str[i] != '\0' && str[i] != '\n') {
        i++;
    }
    i--; // Set i to the last character index

    // Check for palindrome
    j = 0;
    while (j < i) {
        if (str[j] != str[i]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
        j++;
        i--;
    }

    // Print result
    if (isPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}