/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 49  Question: 1
 * Date : 30-10-2026
 *
 * PROBLEM STATEMENT:
 * Print the initials of a name.
 */

#include <stdio.h>

int main() {
    char name[100];
    int i = 0, newWord = 1;

    scanf("%99[^\n]", name);

    while (name[i] != '\0') {
        if (name[i] != ' ' && newWord == 1) {
            printf("%c.", name[i]);
            newWord = 0;
        }

        if (name[i] == ' ') {
            newWord = 1;
        }

        i++;
    }

    return 0;
}
