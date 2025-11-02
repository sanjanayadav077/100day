//Reverse a string.
#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Reads input including spaces until newline

    // Step 1: Find length manually
    while (str[length] != '\0') {
        length++;
    }

    // Step 2: Print string in reverse
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}