/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 44  Question: 2
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Replace spaces with hyphens in a string.
 */

#include <stdio.h>

int main() {
    char text[100];
    int i = 0;

    scanf("%99[^\n]", text);

    while (text[i] != '\0') {
        if (text[i] == ' ') {
            text[i] = '-';
        }

        i++;
    }

    printf("%s", text);

    return 0;
}
