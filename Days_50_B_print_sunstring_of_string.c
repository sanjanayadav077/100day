//Print all sub-strings of a string.
#include <stdio.h>
int main() {
    char str[100];
    int i, j, k;
    printf("Enter a string: ");
    scanf("%s", str);  // Reads a single word; for sentences, use %[^\n]
    // Find length of the string manually
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    printf("All substrings are:\n");
    // Generate all substrings
    for (i = 0; i < length; i++) {         // Starting index
        for (j = i; j < length; j++) {     // Ending index
            // Print substring from i to j
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
