#include <stdio.h>
#include <string.h>

int main() {
    char S[100]; // Assuming a maximum length of 100 characters for the string
    
    // Taking input
    scanf("%s", S);

    // Accessing the 7th character (index 6 in C)
    char lucky_letter = S[6];

    // Printing the lucky letter
    printf("%c
", lucky_letter);

    return 0;
}