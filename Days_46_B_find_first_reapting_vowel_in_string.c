//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main() {
    char str[200];
    int freq[26] = {0}; // Frequency array for lowercase letters a-z
    int i = 0;
    char firstRepeating = '\0';

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Read input including spaces until newline

    // Loop through each character
    while (str[i] != '\0') {
        char ch = str[i];

        // Only consider lowercase letters
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;      // Increment frequency
            if (freq[ch - 'a'] == 2) { // Found first repeating
                firstRepeating = ch;
                break;
                 }
        }
        i++;
    }

    if (firstRepeating != '\0') {
        printf("The first repeating lowercase alphabet is '%c'.\n", firstRepeating);
    } else {
        printf("No repeating lowercase alphabet found.\n");
    }

    return 0;
}