// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
int main() {
    FILE *file;
    char filename[100];
    char newLine[200];

    // Specify the file name
    printf("Enter the filename to append text: ");
    scanf("%s", filename);
    getchar(); // Clear newline character from buffer

    // Open the file in append mode
    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Get new line of text from user
    printf("Enter the text to append: ");
    fgets(newLine, sizeof(newLine), stdin);

    // Append the new line to the file
    fputs(newLine, file);

    // Close the file
    fclose(file);

    printf("File updated successfully with appended text.\n");
    return 0;
}
