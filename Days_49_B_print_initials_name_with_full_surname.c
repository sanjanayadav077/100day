//Print initials of a name with the surname displayed in full.
#include <stdio.h>

int main() {
    char name[200];
    int i = 0, lastSpaceIndex = -1;
    printf("Enter your full name: ");
    scanf("%[^\n]", name); // Read full name including spaces
    // Find the index of the last space (before the surname)
    while (name[i] != '\0') {
        if (name[i] == ' ')
            lastSpaceIndex = i;
        i++;
    }
    printf("Formatted Name: ");
     i = 0;
    while (i < lastSpaceIndex) {
        // Skip spaces
        while (i < lastSpaceIndex && name[i] == ' ')
            i++;
        if (i < lastSpaceIndex) {
            printf("%c. ", name[i]); // Print initial with a dot
        }
        // Move to the end of current word
        while (i < lastSpaceIndex && name[i] != ' ')
            i++;
    }
    // Print surname in full
    if (lastSpaceIndex != -1) {
        i = lastSpaceIndex + 1;
        while (name[i] != '\0') {
            printf("%c", name[i]);
            i++;
        }
    }
    printf("\n");
    return 0;
}