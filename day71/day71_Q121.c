//Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    printf("Enter your age: ");
    scanf("%d", &age);

    FILE *fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("Error: could not create the file.\n");
        return 1;
    }

    fprintf(fp, "Name: %s Age: %d", name, age);
    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");
    return 0;
}