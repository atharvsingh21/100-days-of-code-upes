//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char longest[200] = "";
    char current[200];
    int ci = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n') { str[len - 1] = '\0'; len--; }

    for (int i = 0; i <= len; i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            current[ci++] = str[i];
        } else {
            current[ci] = '\0';
            if (strlen(current) > strlen(longest)) {
                strcpy(longest, current);
            }
            ci = 0;
        }
    }

    printf("Longest word: %s\n", longest);
    return 0;
}