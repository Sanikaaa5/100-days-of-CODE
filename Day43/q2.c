/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 43  Question: 2
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Check if a string is a palindrome.
 */

#include <stdio.h>

int main() {
    char text[100];
    int length = 0, i, same = 1;

    scanf("%99s", text);

    while (text[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (text[i] != text[length - 1 - i]) {
            same = 0;
        }
    }

    if (same == 1) {
        printf("Palindrome");
    } else {
        printf("Not a palindrome");
    }

    return 0;
}
