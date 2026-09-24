//Remove all vowels from a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (int i = 0; i < len; i++) {
        char ch = str[i];
        if (!(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
              ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';

    printf("String without vowels: %s\n", str);
    return 0;
}