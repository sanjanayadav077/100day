//Check if one string is a rotation of another.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0;
    int isRotation = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Find lengths manually
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    // If lengths are different, cannot be rotations
    if (len1 != len2) {
        printf("The strings are not rotations of each other.\n");
        return 0;
    }

    // Check rotation by trying all possible shifts
    for (i = 0; i < len1; i++) {
        int match = 1;
        for (j = 0; j < len1; j++) {
            if (str1[j] != str2[(i + j) % len1]) {
                match = 0;
                break;
            }
        }
        if (match) {
            isRotation = 1;
            break;
        }
    }

    if (isRotation)
        printf("The strings are rotations of each other.\n");
    else
        printf("The strings are not rotations of each other.\n");

    return 0;
}
 