/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 41  Question: 2
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Print each character of a string on a new line.
 */

#include <stdio.h>

int main() {
    char text[100];
    int i = 0;

    scanf("%s", text);

    while (text[i] != '\0') {
        printf("%c\n", text[i]);
        i++;
    }

    return 0;
}
