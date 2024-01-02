#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a string contains digits
bool containsDigits(char* s) {
    int length = strlen(s);
    for (int i = 0; i < length; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            return true;
        }
    }
    return false;
}

int main() {
    int N;
    scanf("%d", &N); // Input number of test cases
    
    while (N--) {
        char s[100]; // Assuming maximum string length is 100
        scanf("%s", s); // Input string
        
        if (containsDigits(s)) {
            printf("Yes
"); // String contains digits
        } else {
            printf("No
"); // String does not contain digits
        }
    }
    
    return 0;
}