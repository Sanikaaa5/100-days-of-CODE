/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 42 Question: 2
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Convert a lowercase string to uppercase without using built-in functions.
 */

#include <stdio.h>

int main() {
    char text[100];
    int i = 0;

    scanf("%99[^\n]", text);

    while (text[i] != '\0') {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = text[i] - 32;
        }

        i++;
    }

    printf("%s", text);

    return 0;
}
