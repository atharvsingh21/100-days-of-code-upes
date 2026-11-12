//Define a structure Student with name, roll_no, and marks, then read and print one student's data.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;

    printf("Name: ");
    fgets(s.name, sizeof(s.name), stdin);

    int len = strlen(s.name);
    if (len > 0 && s.name[len - 1] == '\n') {
        s.name[len - 1] = '\0';
    }

    printf("Roll: ");
    scanf("%d", &s.roll_no);

    printf("Marks: ");
    scanf("%d", &s.marks);

    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);

    return 0;
}