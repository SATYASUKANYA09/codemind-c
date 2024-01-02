#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char vowel;
    fgets(str, sizeof(str), stdin);
    scanf("%c", &vowel);

    int len = strlen(str);
    int index = -1;
    int i;

    for (i = 0; i < len; i++) {
        if (str[i] == vowel) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("True
%d
", index);
    } else {
        printf("False
");
    }

    return 0;
}