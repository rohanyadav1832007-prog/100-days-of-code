//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>
int main() {
    char str[100];
    char target;
    int frequency = 0;
    int i = 0;

    // Read input string
    fgets(str, sizeof(str), stdin);
    // Read the target character
    scanf(" %c", &target);

    // Count frequency of the target character
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == target) {
            frequency++;
        }
        i++;
    }

    // Print the frequency
    printf("%d\n", frequency);
    return 0;
}