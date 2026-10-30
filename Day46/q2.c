/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 46  Question: 2
 * Date : 30-10-2026
 *
 * PROBLEM STATEMENT:
 * Find the first repeating lowercase alphabet in a string.
 */

#include <stdio.h>

int main() {
    char text[100];
    int seen[26] = {0};
    int i = 0, place, found = 0;

    scanf("%99[^\n]", text);

    while (text[i] != '\0') {
        if (text[i] >= 'a' && text[i] <= 'z') {
            place = text[i] - 'a';

            if (seen[place] == 1) {
                printf("%c", text[i]);
                found = 1;
                break;
            }

            seen[place] = 1;
        }

        i++;
    }

    if (found == 0) {
        printf("No repeating lowercase letter");
    }

    return 0;
}
