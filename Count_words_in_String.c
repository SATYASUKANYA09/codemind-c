#include <stdio.h>
#include <string.h>

int countWords(char *str) {
    int count = 0;
    int inWord = 0; // Flag to indicate if currently in a word
    
    // Iterate through the string
    for (int i = 0; str[i] != NULL; i++) {
        // If current character is a whitespace or newline, mark end of word
        if (str[i] == ' ' || str[i] == '
' || str[i] == '	') {
            inWord = 0;
        }
        // If not a whitespace and not already in a word, it's the start of a new word
        else if (inWord == 0) {
            inWord = 1;
            count++; // Increment word count
        }
    }
    return count;
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    
    int words = countWords(str);
    printf("%d
", words);
    
    return 0;
}