/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 73  Question: 1
 * Date : 25-11-2026
 *
 * PROBLEM STATEMENT:
 * Read a text file and count the total number of characters, words, and lines.
 * A word is defined as a sequence of non-space characters separated by spaces or newlines.
 */

#include <stdio.h>

int main() {
    FILE *file;
    int ch, lastChar = '\n';
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    file = fopen("info.txt", "r");

    if (file == NULL) {
        printf("Could not open the file");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;
        lastChar = ch;

        if (ch == '\n') {
            lines++;
        }

        if (ch == ' ' || ch == '\n') {
            inWord = 0;
        } else if (inWord == 0) {
            words++;
            inWord = 1;
        }
    }

    if (characters > 0 && lastChar != '\n') {
        lines++;
    }

    fclose(file);

    printf("Characters = %d\n", characters);
    printf("Words = %d\n", words);
    printf("Lines = %d\n", lines);

    return 0;
}
