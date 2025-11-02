//Replace spaces with hyphens in a string.
#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Read input including spaces until newline

    // Replace spaces with hyphens
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }

    printf("Modified string: %s\n", str);

    return 0;
}