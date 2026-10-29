/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 45  Question: 1
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Count frequency of a given character in a string.
 */

#include <stdio.h>

int main() {
    char text[100], letter;
    int i = 0, count = 0;

    scanf("%99[^\n]", text);
    scanf(" %c", &letter);

    while (text[i] != '\0') {
        if (text[i] == letter) {
            count++;
        }

        i++;
    }

    printf("Frequency = %d", count);

    return 0;
}
