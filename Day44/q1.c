/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 44  Question: 1
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Count spaces, digits, and special characters in a string.
 */

#include <stdio.h>

int main() {
    char text[100];
    int i = 0, spaces = 0, digits = 0, special = 0;

    scanf("%99[^\n]", text);

    while (text[i] != '\0') {
        if (text[i] == ' ') {
            spaces++;
        } else if (text[i] >= '0' && text[i] <= '9') {
            digits++;
        } else if (!((text[i] >= 'a' && text[i] <= 'z') ||
                     (text[i] >= 'A' && text[i] <= 'Z'))) {
            special++;
        }

        i++;
    }

    printf("Spaces = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", special);

    return 0;
}
