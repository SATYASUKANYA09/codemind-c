#include <stdio.h>
#include <ctype.h>

int countUppercaseLetters(char *str) {
    int count = 0;
    while (*str != NULL) {
        if (isupper(*str)) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char input[100];
    fgets(input, sizeof(input), stdin);

    int uppercaseCount = countUppercaseLetters(input);
    printf("%d
", uppercaseCount);

    return 0;
}