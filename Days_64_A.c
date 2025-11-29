//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>
int main(void) {
    static char s[1000001];
    if (!fgets(s, sizeof(s), stdin)) return 0;
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[--len] = '\0';
    }
    if (len == 0) {
        printf("0\n");
        return 0;
    }
    int last[256];
    for (int i = 0; i < 256; ++i) last[i] = -1;
    int maxlen = 0;
    int left = 0; 
    for (int i = 0; i < (int)len; ++i) {
        unsigned char c = (unsigned char)s[i];
        if (last[c] >= left) {
            left = last[c] + 1;
        }
        last[c] = i;
        int curlen = i - left + 1;
        if (curlen > maxlen) maxlen = curlen;
    }
    printf("%d\n", maxlen);
    return 0;
}
