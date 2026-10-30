/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 48  Question: 1
 * Date : 30-10-2026
 *
 * PROBLEM STATEMENT:
 * Check if one string is a rotation of another.
 */

#include <stdio.h>

int main() {
    char first[100], second[100];
    int length = 0, i, shift, same, found = 0;

    scanf("%s", first);
    scanf("%s", second);

    while (first[length] != '\0') {
        length++;
    }

    if (length == 0) {
        printf("Not a rotation");
        return 0;
    }

    for (shift = 0; shift < length; shift++) {
        same = 1;

        for (i = 0; i < length; i++) {
            if (first[(i + shift) % length] != second[i]) {
                same = 0;
                break;
            }
        }

        if (same == 1) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("Rotation");
    } else {
        printf("Not a rotation");
    }

    return 0;
}
