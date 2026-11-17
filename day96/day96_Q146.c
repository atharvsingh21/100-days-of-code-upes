//Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joining;
};

int main() {
    struct Employee e;

    printf("Enter name, ID and joining date (dd mm yyyy): ");
    scanf("%49s %d %d %d %d", e.name, &e.id,
          &e.joining.day, &e.joining.month, &e.joining.year);

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n",
           e.name, e.id, e.joining.day, e.joining.month, e.joining.year);

    return 0;
}