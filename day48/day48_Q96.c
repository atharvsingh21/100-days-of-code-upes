//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n') { str[len - 1] = '\0'; len--; }

    int wordStart = 0;
    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int wordEnd = i - 1;
            int start = wordStart, end = wordEnd;
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            wordStart = i + 1;
        }
    }

    printf("Sentence with each word reversed: %s\n", str);
    return 0;
}