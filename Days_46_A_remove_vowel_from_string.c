//Remove all vowels from a string.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Read input including spaces until newline

    while (str[i] != '\0') {
        // Check if the character is NOT a vowel
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
            str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' &&
            str[i] != 'O' && str[i] != 'U') {
            str[j] = str[i];  // Keep non-vowel character
            j++;
        }
        i++;
    }
    str[j] = '\0';  // Null terminate the modified string

    printf("String after removing vowels: %s\n", str);

    return 0;
}

