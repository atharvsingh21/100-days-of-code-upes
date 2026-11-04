//Create an enum for months and print how many days each month has.
#include <stdio.h>
#include <string.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    const char *names[] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN",
                           "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    char input[20];

    printf("Enter month: ");
    scanf("%19s", input);

    int found = -1;
    for (int i = JAN; i <= DEC; i++) {
        if (strcmp(input, names[i]) == 0) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Invalid month.\n");
        return 0;
    }

    enum Month m = (enum Month)found;

    switch (m) {
        case FEB:
            printf("28 or 29 days\n");
            break;
        case APR:
        case JUN:
        case SEP:
        case NOV:
            printf("30 days\n");
            break;
        default:
            printf("31 days\n");
    }

    return 0;
}