//Count frequency of a given character in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], target;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("Enter character to search for: ");
    scanf("%c", &target);

    for (int i = 0; i < len; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("Frequency of '%c': %d\n", target, count);
    return 0;
}