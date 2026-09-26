//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], combined[200];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    int len1 = strlen(str1);
    if (str1[len1 - 1] == '\n') { str1[len1 - 1] = '\0'; len1--; }

    int len2 = strlen(str2);
    if (str2[len2 - 1] == '\n') { str2[len2 - 1] = '\0'; len2--; }

    if (len1 != len2) {
        printf("Not a rotation.\n");
        return 0;
    }

    strcpy(combined, str1);
    strcat(combined, str1);

    if (strstr(combined, str2) != NULL)
        printf("String2 is a rotation of String1.\n");
    else
        printf("Not a rotation.\n");

    return 0;
}