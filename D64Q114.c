#include <stdio.h>
int lengthOfLongestSubstring(char* s) {
    int n = 0, maxLen = 0, start = 0;
    int index[256] = {0}; // ASCII character set

    while (s[n] != '\0') {
        if (index[(unsigned char)s[n]] > start) {
            start = index[(unsigned char)s[n]];
        }
        index[(unsigned char)s[n]] = n + 1; // Store the next index
        if (n - start + 1 > maxLen) {
            maxLen = n - start + 1;
        }
        n++;
    }
    return maxLen;
}