//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *in, *out;
    int ch;
    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }
    out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: Could not open output.txt\n");
        fclose(in);
        return 1;
    }
    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out);
    }
    fclose(in);
    fclose(out);
    printf("Conversion complete! Check output.txt\n");
    return 0;
}
