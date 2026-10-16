//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
        len--;
    }

    int lastSeen[256];
    for (int i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }

    int start = 0, maxLen = 0;
    for (int i = 0; i < len; i++) {
        unsigned char ch = s[i];

        if (lastSeen[ch] >= start) {
            start = lastSeen[ch] + 1;
        }
        lastSeen[ch] = i;

        int currentLen = i - start + 1;
        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);
    return 0;
}