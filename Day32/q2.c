/*
 * Name : Sanika
 * Roll no. : 590042652
 * Day : 32  Question: 2
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Find the digit that occurs the most times in an integer number.
 */

#include <stdio.h>

int main() {
    int number, digit, count[10] = {0};
    int i, most = 0;

    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    if (number == 0) {
        count[0] = 1;
    }

    while (number > 0) {
        digit = number % 10;
        count[digit]++;
        number = number / 10;
    }

    for (i = 1; i < 10; i++) {
        if (count[i] > count[most]) {
            most = i;
        }
    }

    printf("Most frequent digit = %d", most);

    return 0;
}
