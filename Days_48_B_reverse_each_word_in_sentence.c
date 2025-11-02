//Reverse each word in a sentence without changing the word order.
#include <stdio.h>

int main() {
    char sentence[200];
    int i = 0, start, end, j;

    printf("Enter a sentence: ");
    scanf("%[^\n]", sentence); // Read entire line including spaces

    while (sentence[i] != '\0') {
        // Skip any leading spaces
        while (sentence[i] == ' ') {
            i++;
        }
        if (sentence[i] == '\0')
            break;

        // Mark the start of the word
        start = i;
        // Move i to the end of the word
        while (sentence[i] != ' ' && sentence[i] != '\0') {
            i++;
        }

        end = i - 1; // End index of the word

        // Reverse the word in-place
        while (start < end) {
            char temp = sentence[start];
            sentence[start] = sentence[end];
            sentence[end] = temp;
            start++;
            end--;
        }
    }

    printf("Sentence with reversed words: %s\n", sentence);

    return 0;
}