//Define a struct with enum Gender and print person's gender.
#include <stdio.h>
#include <string.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    enum Gender gender;
};

int main() {
    char input[30];
    struct Person p;

    printf("Enter gender: ");
    scanf("%29s", input);

    const char *value = input;
    if (strncmp(input, "Gender=", 7) == 0) {
        value = input + 7;
    }

    if (strcmp(value, "MALE") == 0) {
        p.gender = MALE;
    } else if (strcmp(value, "FEMALE") == 0) {
        p.gender = FEMALE;
    } else if (strcmp(value, "OTHER") == 0) {
        p.gender = OTHER;
    } else {
        printf("Invalid gender.\n");
        return 0;
    }

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
    }

    return 0;
}