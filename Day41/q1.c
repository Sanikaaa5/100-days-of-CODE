/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 41  Question: 1
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Count characters in a string without using built-in length functions.
 */

#include <stdio.h>

int main() {
    char text[200];
    int i = 0;

    fgets(text, sizeof(text), stdin);

    while (text[i] != '\0' && text[i] != '\n') {
        i++;
    }

    printf("Number of characters = %d", i);

    return 0;
}
