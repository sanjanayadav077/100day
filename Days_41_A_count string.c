//Count characters in a string without using built-in length functions.
#include <stdio.h>
#include<string.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]s", str); // Reads input including spaces until newline

    while (str[count] != '\0') {
        count++;
    }

    printf("Number of characters: %d\n", count);

    return 0;
}