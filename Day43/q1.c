/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 43 Question: 1
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Reverse a string.
 */

#include <stdio.h>

int main() {
    char text[100], temp;
    int length = 0, i;

    scanf("%99s", text);

    while (text[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        temp = text[i];
        text[i] = text[length - 1 - i];
        text[length - 1 - i] = temp;
    }

    printf("%s", text);

    return 0;
}
