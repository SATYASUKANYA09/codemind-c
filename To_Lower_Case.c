#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toLower(char *str) {
    int i;
    for (i = 0; str[i] != NULL; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char input[100];
    fgets(input, sizeof(input), stdin);

    // Removing newline character if present
    if (input[strlen(input) - 1] == '
') {
        input[strlen(input) - 1] = NULL;
    }

    toLower(input);
    printf("%s
", input);

    return 0;
}