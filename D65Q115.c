#include <stdio.h>
#include <string.h>
int areAnagrams(char* s, char* t) {
    int count[26] = {0}; // Assuming only lowercase letters

    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0; // Not an anagram
        }
    }
    return 1; // Anagram
}