//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    int foundIndex = -1;
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int idx = str[i] - 'a';
            freq[idx]++;
            if (freq[idx] == 2 && foundIndex == -1) {
                foundIndex = i;
            }
        }
    }

    if (foundIndex != -1)
        printf("First repeating character: %c\n", str[foundIndex]);
    else
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}