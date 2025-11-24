//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>
int main() {
    char sentence[200];
    char result[200] = "";
    char word[100];
    int i = 0, j = 0, k = 0;

    // Read input sentence
    fgets(sentence, sizeof(sentence), stdin);

    while (1) {
        // Extract a word
        j = 0;
        while (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\0') {
            word[j++] = sentence[i++];
        }
        word[j] = '\0';

        // Reverse the extracted word
        for (k = j - 1; k >= 0; k--) {
            strncat(result, &word[k], 1);
        }

        // If end of sentence, break
        if (sentence[i] == '\0' || sentence[i] == '\n') {
            break;
        }

        // Add space after the word
        strcat(result, " ");
        i++; // Move past the space
    }

    // Print the result
    printf("%s\n", result);
    return 0;
}