 /* Name : Sanika
 * Roll no. : 590042652
 * Day : 26 Question: 2
 * Date : 28-10-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print the following pattern:
 *
 * *
 *
 * *
 * *
 * *
 *
 * *
 * *
 * *
 * *
 * *
 *
 * *
 * *
 * *
 *
 * *
 */

#include <stdio.h>

int main() {
    int row, star, count;

    for (row = 1; row <= 5; row++) {
        if (row <= 3) {
            count = 2 * row - 1;
        } else {
            count = 2 * (5 - row) + 1;
        }

        for (star = 1; star <= count; star++) {
            printf("*\n");
        }

        printf("\n");
    }

    return 0;
}
