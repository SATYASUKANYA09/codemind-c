#include <stdio.h>
#include <string.h>

int main() {
    char str[100]; // Assuming a maximum string length of 100 characters
    
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character if present
    if (str[strlen(str) - 1] == '
') {
        str[strlen(str) - 1] = NULL;
    }
    
    // Calculate and display the count of characters
    int length = strlen(str);
    printf("%d
", length);
    
    return 0;
}