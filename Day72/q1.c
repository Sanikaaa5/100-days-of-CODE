/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 72  Question: 1
 * Date : 24-11-2026
 *
 * PROBLEM STATEMENT:
 * Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets().
 * The program should print all the lines to the console until EOF (end of file) is reached.
 */

#include <stdio.h>

int main() {
    FILE *file;
    char line[100];

    file = fopen("info.txt", "r");

    if (file == NULL) {
        printf("Could not open the file");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}
