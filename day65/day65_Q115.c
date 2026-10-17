//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000], t[1000];
    int freq[26] = {0};

    printf("Enter first string: ");
    fgets(s, sizeof(s), stdin);
    printf("Enter second string: ");
    fgets(t, sizeof(t), stdin);

    int lenS = strlen(s);
    if (lenS > 0 && s[lenS - 1] == '\n') { s[lenS - 1] = '\0'; lenS--; }

    int lenT = strlen(t);
    if (lenT > 0 && t[lenT - 1] == '\n') { t[lenT - 1] = '\0'; lenT--; }

    if (lenS != lenT) {
        printf("Not Anagram\n");
        return 0;
    }

    for (int i = 0; i < lenS; i++) {
        freq[s[i] - 'a']++;
        freq[t[i] - 'a']--;
    }

    int isAnagram = 1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram)
        printf("Anagram\n");
    else
        printf("Not Anagram\n");

    return 0;
}