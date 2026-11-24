/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 75  Question: 1
 * Date : 25-11-2026
 *
 * PROBLEM STATEMENT:
 * Open an existing file in append mode and allow the user to enter a new line of text.
 * Append the text at the end without overwriting existing content.
 */

#include <stdio.h>

int main() {
    FILE *file;
    char text[200];

    file = fopen("info.txt", "a");

    if (file == NULL) {
        printf("Could not open the file");
        return 1;
    }

    printf("Enter a line of text: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, file);

    fclose(file);

    printf("Text added successfully");

    return 0;
}
