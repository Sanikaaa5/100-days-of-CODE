/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 27 Question: 2
 * Date : 28-10-2026
 *
 * PROBLEM STATEMENT:
 *Q54: Write a program to print the following pattern:
 *
 *     *
 *    ***
 *   *****
 *  *******
 *   *****
 *    ***
 *     *
 */

#include <stdio.h>

int main() {
    int row, star, space;

    for (row = 1; row <= 4; row++) {
        for (space = 1; space <= 4 - row; space++) {
            printf(" ");
        }

        for (star = 1; star <= 2 * row - 1; star++) {
            printf("*");
        }

        printf("\n");
    }

    for (row = 3; row >= 1; row--) {
        for (space = 1; space <= 4 - row; space++) {
            printf(" ");
        }

        for (star = 1; star <= 2 * row - 1; star++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
