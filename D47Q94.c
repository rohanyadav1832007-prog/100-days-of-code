// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
int main() {
    char sentence[200];
    char longest[100] = "";
    char word[100];
    int max_length = 0;

    // Read input sentence
    fgets(sentence, sizeof(sentence), stdin);

    // Tokenize the sentence into words
    char *token = strtok(sentence, " \n");
    while (token != NULL) {
        int length = strlen(token);
        if (length > max_length) {
            max_length = length;
            strcpy(longest, token);
        }
        token = strtok(NULL, " \n");
    }

    // Print the longest word
    printf("%s\n", longest);
    return 0;
}