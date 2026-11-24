/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 74  Question: 1
 * Date : 25-11-2026
 *
 * PROBLEM STATEMENT:
 * Take two filenames from the user – a source file and a destination file.
 * Copy all the content from the source file to the destination file using fgetc() and fputc().
 */

#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceName[100], destinationName[100];
    int ch;

    scanf("%99s", sourceName);
    scanf("%99s", destinationName);

    source = fopen(sourceName, "r");

    if (source == NULL) {
        printf("Could not open the source file");
        return 1;
    }

    destination = fopen(destinationName, "w");

    if (destination == NULL) {
        printf("Could not create the destination file");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully");

    return 0;
}
