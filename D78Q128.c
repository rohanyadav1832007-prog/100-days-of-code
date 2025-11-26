// Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *file;
    char filename[] = "text.txt";
    char ch;
    int vowels = 0, consonants = 0;

    // Open the file in read mode