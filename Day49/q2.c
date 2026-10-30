/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 49  Question: 2
 * Date : 30-10-2026
 *
 * PROBLEM STATEMENT:
 * Print initials of a name with the surname displayed in full.
 */

#include <stdio.h>

int main() {
    char name[100];
    int i = 0, lastSpace = -1;

    scanf("%99[^\n]", name);

    while (name[i] != '\0') {
        if (name[i] == ' ') {
            lastSpace = i;
        }
        i++;
    }

    for (i = 0; i < lastSpace; i++) {
        if (i == 0 || name[i - 1] == ' ') {
            printf("%c. ", name[i]);
        }
    }

    printf("%s", name + lastSpace + 1);

    return 0;
}
