#include <stdio.h>

int countVowels(char *str) {
    int vowels = 0;
    int i = 0;

    while (str[i] != NULL) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowels++;
        }
        i++;
    }

    return vowels;
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int vowelCount = countVowels(str);
    printf("%d ", vowelCount);

    return 0;
}