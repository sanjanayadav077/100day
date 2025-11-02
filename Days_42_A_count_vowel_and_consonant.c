//Count vowels and consonants in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Reads input including spaces until newline

    while (str[i] != '\0') {
        char ch = str[i];

        // Convert uppercase to lowercase for simplicity
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Check if it's an alphabet
        if (ch >= 'a' && ch <= 'z') {
            // Check for vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }

        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}