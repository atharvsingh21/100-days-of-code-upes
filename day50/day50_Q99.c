//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main() {
    char date[20];
    int day, month, year;
    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("Enter date (dd/mm/yyyy): ");
    fgets(date, sizeof(date), stdin);

    sscanf(date, "%d/%d/%d", &day, &month, &year);

    if (month < 1 || month > 12) {
        printf("Invalid month.\n");
        return 0;
    }

    printf("Converted date: %02d-%s-%d\n", day, months[month - 1], year);
    return 0;
}