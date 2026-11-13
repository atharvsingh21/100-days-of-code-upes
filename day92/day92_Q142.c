//Store details of 5 students in an array of structures and print all.
#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[5];

    for (int i = 0; i < 5; i++) {
        printf("Student %d name: ", i + 1);
        fgets(s[i].name, sizeof(s[i].name), stdin);

        int len = strlen(s[i].name);
        if (len > 0 && s[i].name[len - 1] == '\n') {
            s[i].name[len - 1] = '\0';
        }

        printf("Student %d roll and marks: ", i + 1);
        scanf("%d %d", &s[i].roll_no, &s[i].marks);

        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\n%-20s %-10s %-10s\n", "Name", "Roll", "Marks");
    for (int i = 0; i < 5; i++) {
        printf("%-20s %-10d %-10d\n", s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}