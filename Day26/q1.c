/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 26 Question: 1
 * Date : 26-10-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print the following pattern:
 * 5
 * 45
 * 345
 * 2345
 * 12345
 */

#include <stdio.h>

int main() {
    int row, i, spaces;

    for (row = 1; row <= 5; row++) {
        for (spaces = 1; spaces <= 5 - row; spaces++) {
            printf(" ");
        }

        for (i = 6 - row; i <= 5; i++) {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;
}
