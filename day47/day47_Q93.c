//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[26] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    int len1 = strlen(str1);
    if (str1[len1 - 1] == '\n') { str1[len1 - 1] = '\0'; len1--; }

    int len2 = strlen(str2);
    if (str2[len2 - 1] == '\n') { str2[len2 - 1] = '\0'; len2--; }

    if (len1 != len2) {
        printf("Not anagrams.\n");
        return 0;
    }

    for (int i = 0; i < len1; i++) {
        freq[str1[i] - 'a']++;
    }
    for (int i = 0; i < len2; i++) {
        freq[str2[i] - 'a']--;
    }

    int isAnagram = 1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("The strings are anagrams.\n");
    else
        printf("Not anagrams.\n");

    return 0;
}