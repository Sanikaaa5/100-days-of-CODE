/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 64  Question: 1
 * Date : 23-11-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. 
 * Print the length as output.
 */

#include <stdio.h>

int main() {
    char s[100];
    int seen[256];
    int length = 0, longest = 0;
    int i, j, c, index, count;

    scanf("%99s", s);

    while (s[length] != '\0') {
        length++;
    }

    for (i = 0; i < length; i++) {
        for (c = 0; c < 256; c++) {
            seen[c] = 0;
        }

        count = 0;

        for (j = i; j < length; j++) {
            index = (unsigned char)s[j];

            if (seen[index] == 1) {
                break;
            }

            seen[index] = 1;
            count++;
        }

        if (count > longest) {
            longest = count;
        }
    }

    printf("%d", longest);

    return 0;
}
