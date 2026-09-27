//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char words[10][30];
    int wordCount = 0, wi = 0;

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if (name[len - 1] == '\n') { name[len - 1] = '\0'; len--; }

    for (int i = 0; i <= len; i++) {
        if (name[i] != ' ' && name[i] != '\0') {
            words[wordCount][wi++] = name[i];
        } else {
            words[wordCount][wi] = '\0';
            wordCount++;
            wi = 0;
        }
    }

    for (int i = 0; i < wordCount - 1; i++) {
        printf("%c.", words[i][0]);
    }
    printf("%s\n", words[wordCount - 1]);

    return 0;
}