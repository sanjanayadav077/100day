//Count spaces, digits, and special characters in a string.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0;
    int spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Reads input including spaces until newline

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            spaces++;
        } 
        else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } 
        else if (!((str[i] >= 'A' && str[i] <= 'Z') || 
                 (str[i] >= 'a' && str[i] <= 'z'))) {
            special++;
        }
        i++;
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}