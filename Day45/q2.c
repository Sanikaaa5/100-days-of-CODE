/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 45 Question: 2
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Toggle case of each character in a string.
 */

#include <stdio.h>

int main() {
    char text[100];
    int i = 0;

    scanf("%99[^\n]", text);

    while (text[i] != '\0') {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = text[i] - 32;
        } else if (text[i] >= 'A' && text[i] <= 'Z') {
            text[i] = text[i] + 32;
        }

        i++;
    }

    printf("%s", text);

    return 0;
}
