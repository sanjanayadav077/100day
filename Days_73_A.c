//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.
#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0;
    int inWord = 0;
    fp = fopen("info.txt", "r");  
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n')
            lines++;
        if (!isspace(ch)) {
            if (inWord == 0) {
                words++;        
                inWord = 1;
            }
        } else {
            inWord = 0;         
        }
    }
    if (chars > 0 && ch != '\n')
        lines++;

    fclose(fp);

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
