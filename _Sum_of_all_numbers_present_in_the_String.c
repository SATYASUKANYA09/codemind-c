#include <stdio.h>

int main() {
    char input[100];
    printf("");
    scanf("%s", input);
    
    int sum = 0;
    for (int i = 0; input[i] != NULL; i++) {
        if (input[i] >= '0' && input[i] <= '9') {
            sum += input[i] - '0';
        }
    }
    
    printf("%d
", sum);
    return 0;
}