#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swapping characters
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards the middle
        start++;
        end--;
    }
}

int main() {
    char input[1000];
    fgets(input, sizeof(input), stdin);

    // Remove the newline character if present
    if (input[strlen(input) - 1] == '
') {
        input[strlen(input) - 1] = NULL;
    }

    // Reverse the string
    reverseString(input);

    // Display the reversed string
    printf("%s
", input);

    return 0;
}