//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
#include <string.h>
enum Operation { ADD, SUBTRACT, MULTIPLY };
int main() {
    char input[20];
    int a, b;
    enum Operation op;

    printf("Enter operation and two numbers: ");
    scanf("%19s %d %d", input, &a, &b);

    if (strcmp(input, "ADD") == 0) {
        op = ADD;
    } else if (strcmp(input, "SUBTRACT") == 0) {
        op = SUBTRACT;
    } else if (strcmp(input, "MULTIPLY") == 0) {
        op = MULTIPLY;
    } else {
        printf("Invalid operation.\n");
        return 0;
    }

    switch (op) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }
    return 0;
}