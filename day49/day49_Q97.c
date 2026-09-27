//Print the initials of a name.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if (name[len - 1] == '\n') { name[len - 1] = '\0'; len--; }

    printf("Initials: ");
    int newWord = 1;
    for (int i = 0; i < len; i++) {
        if (newWord && name[i] != ' ') {
            printf("%c.", name[i]);
            newWord = 0;
        }
        if (name[i] == ' ') {
            newWord = 1;
        }
    }
    printf("\n");

    return 0;
}