/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 50  Question: 2
 * Date : 30-10-2026
 *
 * PROBLEM STATEMENT:
 * Print all sub-strings of a string.
 */

#include <stdio.h>

int main() {
    char text[100];
    int i, j, k;

    scanf("%99s", text);

    for (i = 0; text[i] != '\0'; i++) {
        for (j = i; text[j] != '\0'; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", text[k]);
            }

            printf("\n");
        }
    }

    return 0;
}
