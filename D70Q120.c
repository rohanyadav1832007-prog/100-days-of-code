#include <stdio.h>
int main () {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    int i = 0;
    int new_word = 1; 
    
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            new_word = 1; 
        } else {
            if (new_word && str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - ('a' - 'A'); 
            }
            new_word = 0;
        }
        i++;
    }
    
    printf("String in sentence case: %s", str);
    
    return 0;
}