//Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("No students to compare.\n");
        return 0;
    }

    struct Student s[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name, roll and marks of student %d: ", i + 1);
        scanf("%49s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    int top = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[top].marks) {
            top = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", s[top].name, s[top].marks);

    return 0;
}