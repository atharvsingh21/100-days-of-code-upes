//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main() {
    char sourceName[100], destName[100];

    printf("Enter source file name: ");
    scanf("%99s", sourceName);
    printf("Enter destination file name: ");
    scanf("%99s", destName);

    FILE *src = fopen(sourceName, "r");
    if (src == NULL) {
        printf("Error: could not open %s\n", sourceName);
        return 1;
    }

    FILE *dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Error: could not create %s\n", destName);
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destName);
    return 0;
}