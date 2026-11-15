//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
struct Student {
    char name[50];
    int roll_no;
    int marks;
};

void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student st;

    printf("Enter name, roll and marks: ");
    scanf("%49s %d %d", st.name, &st.roll_no, &st.marks);

    printStudent(st);

    return 0;
}