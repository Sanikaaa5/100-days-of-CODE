/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 46  Question: 1
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Remove all vowels from a string.
 */

#include <stdio.h>

int main() {
    char text[100];
    int i = 0, j = 0;

    scanf("%99[^\n]", text);

    while (text[i] != '\0') {
        if (text[i] != 'a' && text[i] != 'e' &&
            text[i] != 'i' && text[i] != 'o' && text[i] != 'u' &&
            text[i] != 'A' && text[i] != 'E' &&
            text[i] != 'I' && text[i] != 'O' && text[i] != 'U') {
            text[j] = text[i];
            j++;
        }

        i++;
    }

    text[j] = '\0';

    printf("%s", text);

    return 0;
}
