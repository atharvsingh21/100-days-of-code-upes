//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    int newWord = 1;
    for (int i = 0; i < len; i++) {
        char ch = str[i];

        if (ch == ' ') {
            newWord = 1;
        } else {
            if (newWord) {
                if (ch >= 'a' && ch <= 'z') {
                    str[i] = ch - 32;
                }
                newWord = 0;
            } else {
                if (ch >= 'A' && ch <= 'Z') {
                    str[i] = ch + 32;
                }
            }
        }
    }

    printf("%s\n", str);
    return 0;
}