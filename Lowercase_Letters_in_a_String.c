#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int lowercaseCount = 0;
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != NULL; i++) {
        if (islower(str[i])) {
            lowercaseCount++;
        }
    }

    printf("%d
", lowercaseCount);

    return 0;
}