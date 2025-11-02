//Check if two strings are anagrams of each other.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0};
    int i = 0;

    printf("Enter first string: ");
    scanf("%s", str1); // Read first string

    printf("Enter second string: ");
    scanf("%s", str2); // Read second string

    // Count frequency of each character in first string
    while (str1[i] != '\0') {
        if (str1[i] >= 'a' && str1[i] <= 'z') {
            freq1[str1[i] - 'a']++;
        }
        i++;
        }

    i = 0;
    // Count frequency of each character in second string
    while (str2[i] != '\0') {
        if (str2[i] >= 'a' && str2[i] <= 'z') {
            freq2[str2[i] - 'a']++;
        }
        i++;
    }

    // Compare frequency arrays
    int isAnagram = 1;
    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = 0;
            break;
        }
        }

    if (isAnagram)
        printf("The strings are anagrams.\n");
    else
        printf("The strings are not anagrams.\n");

    return 0;
}