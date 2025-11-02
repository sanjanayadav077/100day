//Print the initials of a name.
#include <stdio.h>

int main() {
    char name[200];
    int i = 0;

    printf("Enter your full name: ");
    scanf("%[^\n]", name);  // Read full name including spaces

    printf("Initials: ");

    // Print the first character if it's not a space
    if (name[0] != ' ' && name[0] != '\0') {
        printf("%c", name[0]);
    }

    // Loop through the string
    while (name[i] != '\0') {
        // If a space is found, the next character is an initial
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0') {
            printf("%c", name[i+1]);
        }
        i++;
    }

    printf("\n");

    return 0;
}
