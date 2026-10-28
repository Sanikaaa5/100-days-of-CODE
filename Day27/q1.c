/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 27 Question: 1
 * Date : 28-10-2026
 *
 * PROBLEM STATEMENT:
 * Q53: Write a program to print the following pattern:
 * *
 * ***
 * *****
 * *******
 * *********
 * *******
 * *****
 * ***
 * *
 */

#include <stdio.h>

int main() {
    int row, star;

    for (row = 1; row <= 5; row++) {
        for (star = 1; star <= 2 * row - 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    for (row = 4; row >= 1; row--) {
        for (star = 1; star <= 2 * row - 1; star++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
