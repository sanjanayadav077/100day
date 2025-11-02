//Count frequency of a given character in a string.
#include <stdio.h>

int main() {
    char str[200];
    char ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Read input including spaces until newline

    printf("Enter the character to count: ");
    scanf(" %c", &ch);     // Note the space before %c to skip any leftover newline

    // Loop through string and count occurrences
    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("The character '%c' occurs %d times.\n", ch, count);

    return 0;
}