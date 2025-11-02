//Find the longest word in a sentence.
#include <stdio.h>

int main() {
    char sentence[200];
    char longest[100];
    int i = 0, j = 0;
    int currentLength = 0, maxLength = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence);  // Read full sentence including spaces

    int start = 0;  // Start index of current word
    int longestStart = 0; // Start index of longest word

    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            currentLength++;
        } else {
            // End of a word
            if (currentLength > maxLength) {
                maxLength = currentLength;
                longestStart = i - currentLength;
            }
            currentLength = 0;
        }

        if (sentence[i] == '\0')
            break;
        i++;
    }

    // Copy the longest word to another string
    for (i = 0; i < maxLength; i++) {
        longest[i] = sentence[longestStart + i];
    }
    longest[maxLength] = '\0'; // Null-terminate the string

    printf("The longest word is: %s\n", longest);

    return 0;
}
